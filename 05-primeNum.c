#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool checkPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    printf("Enter the value of n (number of prime numbers): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("\n==========================================\n");
    printf("        FIRST %d PRIME NUMBERS           \n", n);
    printf("==========================================\n\n");

    int count = 0;
    int num = 2;

    // Loop until we find n prime numbers
    while (count < n) {
        if (checkPrime(num)) {
            printf("%-8d", num); // Tabular formatting with width 8
            count++;

            // Print 5 prime numbers per line
            if (count % 5 == 0) {
                printf("\n");
            }
        }
        num++;
    }

    printf("\n");
    return 0;
}