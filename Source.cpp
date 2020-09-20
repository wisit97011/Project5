#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char number[10];
    int check = 0;
    int i = 0;

    printf("Enter a number: ");
    scanf_s("%s", number);
    while (number[i++] != '\0')
    {
        if (number[i] == '.')
        {
            check = 1;
            break;
        }
    }

    if (check)
        printf("Input Number is a Floating Number");
    else
        printf("Input Number is a integer Number");

    return 0;
}