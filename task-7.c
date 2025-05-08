#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    for (int i=48 ; i <= 57;i++)
    {
        for (int j=i+1 ; j <= 57;j++)
        {
            for (int k = j+1; k <= 57;k++)
            {
            AyoubChar(i);
            AyoubChar(j);
            AyoubChar(k);
            AyoubChar(' ');
        }
            }
              
       
    } 
}
Task 7 C
