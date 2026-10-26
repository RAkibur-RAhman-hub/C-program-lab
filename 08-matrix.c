#include<stdio.h>
#define MAX 10

void readMatrix(int mat[MAX][MAX], int n, char name){
    printf("\n Enter Matrix %c (%d X %d): ", name, n, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("\n %c [%d][%d]: " , name, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[MAX][MAX], int B[MAX][MAX], int sum[MAX][MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX], int prod[MAX][MAX], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            prod[i][j] = 0;
            for(int k=0; k<n; k++){
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {

    int n;
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX], prod[MAX][MAX];
    printf("\n Enter the order of the square matrices: ");
    scanf("%d", &n);

    if(n > MAX || n <= 0) {
        printf("\n Invalid matrix order! \n");
        return 1;
    }
    printf("\n Enter Matrix A: \n");
    readMatrix(A, n, 'A');
    printf("\n Enter Matrix B: \n");
    readMatrix(B, n, 'B');

    addMatrix(A, B, sum, n);
    multiplyMatrix(A, B, prod, n);

    printf("\n Matrix A: \n");
    displayMatrix(A, n);
    printf("\n Matrix B: \n");
    displayMatrix(B, n);

    printf("\n Sum of Matrix (A + B): \n");
    displayMatrix(sum, n);

    printf("\n Product of Matrix (A * B): \n");
    displayMatrix(prod, n);

    return 0;
}