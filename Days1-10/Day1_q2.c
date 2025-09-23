#include <stdio.h>

int main() {
    float a, b;

    // Input 1
    printf("Enter two numbers (Input 1): ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f, Diff = %.2f, Product = %.2f, ", a + b, a - b, a * b);
    if(b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Quotient = Cannot divide by zero!\n");

    // Input 2
    printf("Enter two numbers (Input 2): ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f, Diff = %.2f, Product = %.2f, ", a + b, a - b, a * b);
    if(b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Quotient = Cannot divide by zero!\n");

    return 0;
}
