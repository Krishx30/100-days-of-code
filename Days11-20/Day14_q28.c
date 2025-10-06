// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i;
    float product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("No even numbers between 1 and %d.\n", n);
        return 0;
    }

    printf("Even numbers up to %d are: ", n);
    for (i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
        product *= i;
    }
    printf("\nProduct of even numbers up to %d = %lld\n", n, product);

    return 0;
}
