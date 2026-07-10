#include <stdio.h>

int main() {
    double base, result = 1;
    int exponent;

    // Input base and exponent
    printf("Enter base (x): ");
    scanf("%lf", &base);

    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    // Handle negative exponent
    int positiveExponent = exponent;
    if (exponent < 0) {
        positiveExponent = -exponent;
    }

    // Multiply base exponent times
    for (int i = 1; i <= positiveExponent; i++) {
        result *= base;
    }

    // If exponent was negative
    if (exponent < 0) {
        result = 1 / result;
    }

    // Output the result
    printf("%.2lf ^ %d = %.4lf\n", base, exponent, result);

    return 0;
}