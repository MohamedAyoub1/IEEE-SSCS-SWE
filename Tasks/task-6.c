#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    for (int i=48 ; i <= 57;i++)
    {
        for (int j=i+1 ; j <= 57;j++)
        { 
            AyoubChar(i);
            AyoubChar(j);
            AyoubChar(' ');
        }
       
    } 
}
Task 6 C
