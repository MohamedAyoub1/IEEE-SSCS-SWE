#include <stdio.h>
void echo(int n);
int main()
{
int num;
printf("Enter The Number ");
scanf("%d",&num);
echo(num);
}
void echo(int n)
{
if (n>0)
{
printf("Echo ");
echo(n-1);
}
else
{
return;
}
}
