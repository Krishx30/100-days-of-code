/*WAP to input a year and check whether it is a leap year or not using conditional statements.
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.*/
#include <stdio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year\n", year);
    }
    else
    {
        printf("%d is NOT a Leap Year\n", year);
    }
    return 0;
}
