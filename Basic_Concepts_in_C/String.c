// Program used to demontrate the concept of String .
#include<stdio.h>

int main()
{
   //first way
   char Arr[5] = {'a','b','c','d','\0'};
   
   // second way
   char Brr[] = {"abcd"};
   
   printf("%s\n",Arr[0]);
   printf("%s\n",Arr[1]);
   printf("%s\n",Arr[2]);
   printf("%s\n",Arr[3]);
   printf("%s\n",Arr[4]);
   
   printf("%s\n",Brr[0]);
   printf("%s\n",Brr[1]);
   printf("%s\n",Brr[2]);
   printf("%s\n",Brr[3]);
   printf("%s\n",Brr[4]);
   
   
   return 0;
   
  }
   