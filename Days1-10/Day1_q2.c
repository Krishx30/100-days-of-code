// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f, Diff = %.2f, Product = %.2f, ", a + b, a - b, a * b);
    if (b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Quotient = Cannot divide by zero!\n");

    return 0;
}
