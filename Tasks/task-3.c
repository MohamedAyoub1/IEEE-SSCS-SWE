#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    char Character;
    printf ("Enter the Character");
    scanf("%c", &Character);
    //printf("The character you entered is %c", Character);
    int num = (int)Character;
    if (num >=65 && num <= 90)
    {
        printf("Upper");
    }
    else if (num >=91 && num <= 122)
    {
        printf("Lower");
    }
    else 
    {
        printf("Enter Characters only please");
    }
}
Task 3 C
