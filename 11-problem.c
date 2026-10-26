#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    // Input number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][100], temp[100];

    // Input strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    // Sort strings in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    // Open file to store sorted strings
    FILE *file = fopen("sorted_strings.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("\n--- Sorted Strings (Alphabetically) ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);             // Display on screen
        fprintf(file, "%s\n", str[i]);      // Write to file
    }

    // Close the file
    fclose(file);
    printf("\nSorted strings have been successfully saved to 'sorted_strings.txt'.\n");

    return 0;
}