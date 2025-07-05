#include <stdio.h>
char *get_reply();
int main()
{
get_reply();
// char *rett = get_reply();
printf("The Returned String is: %s \n",get_reply()); //printf("The Returned String is: %s \n",rett); (both prints till \0 appears)
}
char *get_reply()
{
static char RetArr[] = "Task 3 Section 7";
return RetArr;
}
