#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    for (int i=0 ; i <= 9;i++)
    {
        for (int j=0 ; j <= 9;j++)
        {
            int num = (int)i * (int)j;
            if (num >= 10)
            {
               
                AyoubChar( num / 10+ '0');  AyoubChar(num % 10 + '0'); 
            }
            else 
            {
                AyoubChar(num + '0');
            }
            num = (int)i * (int)j;
            AyoubChar(' ');
        } 
        AyoubChar('\n');
    } 
}
Task 8 C
