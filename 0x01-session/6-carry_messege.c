#include <stdio.h>
void print_message(char *msg);
int main()
{
char Arr[5] = "Task3"; //char Arr[5] = {'T','a','s','k','3'};
char *mss = Arr;
print_message(mss);
}
void print_message(char *msg)
{
for (int i=0;i<5;i++)
{
printf("%c",*msg); //printf("%c ",*msg);
msg = msg+1; // *msg++;
}
printf("\n");
}
