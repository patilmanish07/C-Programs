 
#include<stdio.h>
 #pragma pack(5)       // in pragma pack mentioned (1) to
                      // get exact memory of a variable 
 
  struct Demo
 {
   int i;
   char ch;
   float f;
   int j;
 };
 
  int main()
{
  printf("%d\n",sizeof(struct Demo));
  
  return 0;
}