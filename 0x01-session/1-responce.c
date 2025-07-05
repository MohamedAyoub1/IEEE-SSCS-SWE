#include <stdio.h>
int is_response_detected(int strength);
int main()
{
int num;
printf("Enter the Number \n");
scanf("%d",&num);
is_response_detected(num);
printf("Returned Value is %d \n",is_response_detected(num));
}
int is_response_detected(int strength)
{
if (strength > 50)
{
return 1;
}
else 
{
return 0;
}
}
