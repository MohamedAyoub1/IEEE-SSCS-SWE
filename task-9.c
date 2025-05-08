#include <stdio.h>
#include "AyoubbChar.h"
int main(void)
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n < 0 || n > 15)
    {
        printf("Invalid Number");
    }
    else 
    {
        for (int i=0 ; i <= n;i++)
    {
        for (int j=0 ; j <= n;j++)
        {
            int num = (int)i * (int)j;
            if (num >= 100)
            {
                int u = num % 10;
                int t = (num/10) % 10;
                int h = num / 100;
                AyoubChar( h + '0');
                AyoubChar( t + '0');
                AyoubChar( u + '0'); 
            }
            else if (num >= 10 && num <100)
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
}
Task 9 C
