#include <stdio.h>
int main()
{
int varible_signal =98;
int *ptr = &varible_signal;
printf("The value of Varible Signal is: %d \n", varible_signal);
printf("The Adress of the Varible Signal is: %p \n", ptr); //you can use &varible_signal instead of ptr
}
