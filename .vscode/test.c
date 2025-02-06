#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* dupliquer(char* str);

int main()
{
  printf("%s",dupliquer("Massi"));
  return 0;
} 

char* dupliquer(char* str){
  char* buf = malloc(10);
  for (int i = 0; i < 10; i++)
  {
    buf[i] = 0;
  }
  
  int  i = 0;
  while (str[i]!=0)
  {
    buf[i] = str[i];
    i++;
  }
  return buf;
}