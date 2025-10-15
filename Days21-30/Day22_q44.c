// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n;
    float numerator = 3, denominator = 4, sum = 1;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++)
    {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 2; 
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}


