// Online C compiler to run C program online
#include <stdio.h>
int str2num(char *ptr);
int main()
{
char str[] = "12345";
char *ptr;
ptr = str;
printf("The Modified Intiger is %d \n",str2num(ptr));
}

int str2num(char *ptr)
{
  char *star = ptr;
  int sum=0;
  int mul=1;
  while (*ptr != 0)
 {*ptr = *ptr - 48; //can use -'0' Both convert str(ASCII) to int
  ptr++;
 }
 ptr--;
while (ptr>=star)
{
    sum = sum + (*ptr) * mul;
    mul = mul*10;
    ptr--;
 }
 return sum;
}
