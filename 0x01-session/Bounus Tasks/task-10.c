#include <stdio.h>
int sumDigits (long long int);
int numDigits(long long int);
int main()
{
long long num;
printf("Enter Your Number: ");
scanf("%lld",&num);
printf("The Sum of Digits is %d \n",sumDigits(num));
printf("The Number of Digits is %d \n",numDigits(num));
}


int sumDigits (long long int x)
{
 if(x<0) {x=x*-1;}
 if (x/10 == 0)
 {
    return x;
 }
 else
 {
    //i++; must be global varible
    return (x%10 + sumDigits(x/10));
 }
}



int numDigits(long long int y)
{
 if(y<0) {y=y*-1;}
 if (y/10 == 0)
 {
    return 1;
 }
 else
 {
    return (1 + numDigits(y/10));
 }
}
