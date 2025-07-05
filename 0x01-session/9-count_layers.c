#include <stdio.h>
int sum_layers(int n);
int main()
{
int num;
printf("Enter The Number: \n");
scanf("%d",&num);
printf("The Sum from %d to 1 is: %d \n",num,sum_layers(num));

}
int sum_layers(int n)
{
if (n==0)
{
return 0;
}
else
{
return n+sum_layers(n-1);
}
}

