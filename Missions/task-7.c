#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the integer ");
    scanf("%d", &num1);
    if (num1>=1 && num1<=9)
    {
        printf("The Equivlent Char is %c", num1 + 48);
    }
    else
    {
        printf("You must enter a number between 1 and 9");
    }
}
