// Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int num, temp, remainder, factorial, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;

        // find factorial of the digit
        factorial = 1;
        for (i = 1; i <= remainder; i++)
        {
            factorial *= i;
        }

        sum += factorial; // add factorial of each digit
        temp /= 10;       // move to next digit
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
