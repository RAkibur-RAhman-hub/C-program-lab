#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Function 1: Converts degree to radian
double degToRad(double degree) {
    return degree * (PI / 180.0);
}

// Function 2: Calculates sine series sum up to n terms
double calculateSine(double x_rad, int n) {
    double sum = x_rad;
    double term = x_rad;

    for (int i = 2; i <= n; i++) {
        // Compute current term from previous term
        term = -term * (x_rad * x_rad) / ((2 * i - 2) * (2 * i - 1));
        sum += term;
    }

    return sum;
}

int main() {
    double degree, x_rad, sin_val;
    int n;

    printf("Enter angle in degrees (x): ");
    scanf("%lf", &degree);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Convert degree to radian using Function 1
    x_rad = degToRad(degree);

    // Calculate sine using Function 2
    sin_val = calculateSine(x_rad, n);

    printf("\n--- Results ---\n");
    printf("Angle in radians: %.6lf rad\n", x_rad);
    printf("Calculated sin(%.2lf) using %d terms = %.6lf\n", degree, n, sin_val);
    printf("Built-in sin(%.2lf) = %.6lf\n", degree, sin(x_rad));

    return 0;
}