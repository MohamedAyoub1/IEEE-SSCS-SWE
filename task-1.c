Task 1 C
#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    int i = 97;
    int j = 90;
    for (i; i <= 122; i++)
    if ( i == 113)
    {
        continue;
    }
    else
    {
        AyoubChar(i);
    }
    for (j; j >= 65 ; j--)
    if ( j == 81)
    {
        continue;
    }
    else
    {
        AyoubChar(j);
    }
        return 0;
}
