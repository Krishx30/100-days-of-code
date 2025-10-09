// Write a program to check if a number is an Armstrong number.
/*A number is called an Armstrong number (or narcissistic number) if
Each digit to the power of the number of digits, when added together, gives back the same number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    while (original != 0)
    {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate sum of each digit raised to power n
    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is NOT an Armstrong Number\n", num);

    return 0;
}
