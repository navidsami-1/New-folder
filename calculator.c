#include<stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("Result: %d\n", a + b);
    } else if (op == '-') {
        printf("Result: %d\n", a - b);
    } else if (op == '*') {
        printf("Result: %d\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Result: %.2f\n", (float)a / b);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else if (op == '%') {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Invalid operator!\n");
    }
}