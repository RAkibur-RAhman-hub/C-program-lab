#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, nextTerm;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("\nThe first %d Fibonacci numbers are:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        nextTerm = a + b; // Calculate the next term
        a = b;            // Shift 'a' to 'b'
        b = nextTerm;     // Shift 'b' to 'nextTerm'
    }

    printf("\n");
    return 0;
}
