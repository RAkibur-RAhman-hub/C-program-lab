#include <stdio.h>
#include <math.h>

void d2b(int n) // decimal to binary
{
    if (n == 0) {
        printf("0");
        return;
    }
    int binNum [32];
    int i = 0;

    while (n>0)
    {
        binNum[i] = n % 2;
        n= n/2;
        i++;
    }

    for(int j= i-1; j>=0; j--){
        printf("%d",binNum[j]);
    }      
}


void d2O(int n) // decimal to octal
{
    if (n == 0) {
        printf("0");
        return;
    }
    int octalNum [32];
    int i = 0;

    while (n>0)
    {
        octalNum[i] = n % 8;
        n= n/8;
        i++;
    }

    for(int j= i-1; j>=0; j--){
        printf("%d",octalNum[j]);
    }      
}

void d2H(int n) //binary to Hexadecimal
{
    if(n == 0){
        printf("0");
        return ;
    }

    char hexNum[32];
    int i =0;

    while(n>0) 
    {
        int rem = n % 16;
        if(rem <10){
            hexNum[i] = rem +'0'; 
        } else {
            hexNum[i] = (rem -10) + 'A';
        }
        n = n/16;
        i++;
    }

    for(int j =i-1;j>=0;j--){
        printf("%c",hexNum[j]);
    }
}

int main() {
    int decimal;
    printf("Enter a decimal value : ");
    scanf("%d", &decimal);
    printf("\n -- Result -- \n");

    printf("i) Binary value is : ");
    d2b(decimal);
    printf("\n");

    printf("ii) Octal value is : ");
    d2O(decimal);
    printf("\n");

    printf("iii) Hexadecimal value is : ");
    d2H(decimal);
    printf("\n");

    return 0;
}