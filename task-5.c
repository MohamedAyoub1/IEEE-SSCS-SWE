#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    char c;
    printf("Enter the Charcter");
    scanf("%c",&c);
    int num = (int)c;
    if ( (num <= 90 && num >=65) || (num <= 172 && num >=61) )
    { 
        AyoubChar('1');
        return 1;
    }
    else 
    {
        AyoubChar('0');
        return 0;
    }
}
    Task 5 C
