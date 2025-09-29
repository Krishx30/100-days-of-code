// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    //Added space before %c it ignores leftover newline/whitespace from previous input

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + ('a' - 'A');
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The character is a Vowel\n");
        }
        else
        {
            printf("The character is a Consonant\n");
        }
    }
    else
    {
        printf("Not an alphabet character.\n");
    }
    return 0;
}
