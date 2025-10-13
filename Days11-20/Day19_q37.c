// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;

    for (int i = 1;; i++)
    {
        lcm = max * i;
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            printf("LCM of %d and %d = %d\n", num1, num2, lcm);
            break;
        }
    }

    return 0;
}
