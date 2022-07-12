// Program used to demonstrate the concept padding in C.

#include<stdio.h>
// #pragma pack(1)       // with pragma pack(1) they allocate 
                         //13 byte memory
struct Demo 
{
   int i;
   char ch;         // instead of 1byte here 4 byte memory 
   float f;         // is allocated to char ch;   =16
    int j;
 };
 
 int main()
 {
   printf("%d\n",sizeof(struct Demo));
   
   return 0;
 }