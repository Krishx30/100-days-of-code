// Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // to print later

    while (num != 0)
    {
        remainder = num % 10;                 // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                            // remove last digit
    }

    printf("Original Number = %d\n", original);
    printf("Reversed Number = %d\n", reversed);

    return 0;
}
