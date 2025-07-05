#include <stdio.h>
int signal_strength = 0;
void boost_signal(int n);

int main()
{
int n;
printf("Enter n: ");
scanf("%d",&n);
printf("Signal_Strength Before Calling = %d \n",signal_strength);
boost_signal(n);
printf("Signal_Strength After Calling = %d \n",signal_strength);
}
void boost_signal(int n)
{
int signal_strength = 100;
printf("Signal Strength inside Function = %d \n",n);
}
