#include <stdio.h>
int is_strong_signal(int strength);
void check_signal(int strength);
int main()
{
int num;
printf("Enter the Number \n");
scanf("%d",&num);
is_strong_signal(num);
check_signal(num);
}
int is_strong_signal(int strength)
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
void check_signal(int strength)
{
int L = is_strong_signal(strength);
if (L == 1)
{
printf("Strong Signal Detected \n");
}
else 
{
printf("No Signal Detected \n");
}
}
