#include<stdio.h>
int main() {
    int N = 10; // Number of rows in the pyramid

    for (int i = 1; i <= N; i++) {
    // 1. Print leading spaces for alignment
    for (int space = 1; space <= N - i; space++) {
    printf(" ");
    }

    // 2. Print ascending digit sequence
    for (int j = 0; j < i; j++) {
    printf("%d"
    , (i + j) % 10);
    }

    // 3. Print descending digit sequence
    for (int j = i - 2; j >= 0; j--) {
    printf("%d"
    , (i + j) % 10);
    }

    // Move to the next line
    printf("\n");
    }
    return 0;
}