.h file 

#ifndef AYOUBCHAR 
#define AYOUBCHAR
void AyoubChar(char c);
#endif

.c file

#include <unistd.h>
#include "AyoubChar.h"
void AyoubChar (char c)
{
    write(1, &c, 1);}
main file#include <stdio.h>
#include "AyoubChar.h"int main(void)
{    AyoubChar('H');
    AyoubChar('K');    return 0;
}Task 0 C
compiling the wyy it gives me fetal error
