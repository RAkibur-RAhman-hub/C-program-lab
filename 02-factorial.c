#include<stdio.h>
int main(){
    int n;
    unsigned long long factorial = 1;

    // input positive integer
    printf("Enter a positive integer: ");
    scanf("%d" ,&n);

    //check if the input is negative integer
    if (n<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {

        // Calculate factorial using loop
        for (int i = 1; i <= n; i++) {
        factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);

    }
    
    return 0;
}