// Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main()
{
    int num, firstDigit, lastDigit, temp, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    lastDigit = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }
    firstDigit = temp;

    num = num % place;
    num = num / 10;

    int swapped = lastDigit * place + num * 10 + firstDigit;

    printf("Number after swapping first and last digits = %d\n", swapped);
    return 0;
}
