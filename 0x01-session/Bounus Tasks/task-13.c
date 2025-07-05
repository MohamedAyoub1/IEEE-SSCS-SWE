#include <stdio.h>
int word_num(char *ptr);
int main()
{
char str[] = "My Name is Mohamed Ayoub";
char *ptr;
ptr = str;
printf("The Number of Words in This String is %d \n",word_num(ptr));
}

int word_num(char *ptr)
{
    int count;
  if(*ptr != ' ' && *ptr != '\t' && *ptr != '\n' )
  {
       count=1; 
  }
  else
  {
        count=0;
  }
  while (*ptr != '\0')
  {
  if(*ptr == ' ' || *ptr == '\t' || *ptr == '\n' )
  {
      if(*(ptr+1) != ' ' && *(ptr+1) != '\t' && *(ptr+1) != '\0' && *(ptr+1) != '\n' )
      {
         count++;
         ptr++;    
      }
      else
      {
         ptr++;
      }
  }
  else 
  {
      ptr++;
  }
  }
 return count;
}
