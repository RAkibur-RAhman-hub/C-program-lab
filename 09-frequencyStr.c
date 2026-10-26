#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}; // Initialize all frequencies to 0

    // Input line of text
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // Step 1: Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Ignore trailing newline from fgets
            freq[(unsigned char)str[i]]++;
        }
    }

    printf("\n--- Character Frequencies ---\n");

    // Step 2: Display frequencies in original order of appearance
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (ch != '\n' && freq[ch] > 0) {
            if (ch == ' ') {
                printf("'Space' = %d\n", freq[ch]);
            } else {
                printf("'%c' = %d\n", ch, freq[ch]);
            }
            freq[ch] = 0; // Prevent printing duplicate output
        }
    }

    return 0;
}