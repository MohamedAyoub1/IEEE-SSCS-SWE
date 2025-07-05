#include <stdio.h>
void swap(int *a, int *b);
int main()
{
int num1,num2;
int *ptr1 = &num1;
int *ptr2 = &num2;
printf("Enter the First Number: \n");
scanf("%d",&num1);
printf("Enter the Second Number: \n");
scanf("%d",&num2);
swap(ptr1,ptr2);
printf("The Swapped First Number is: %d \n",*ptr1);
printf("The Swapped Second  Number is: %d \n",*ptr2);  
}
void swap(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
