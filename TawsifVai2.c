#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / b;
    int mod = a % b;

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %f\n", div);
    printf("Modulus = %d\n", mod);
    return 0;
}