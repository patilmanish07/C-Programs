#include<stdio.h>

int main()
{
   int i = 8;
   int *j;
   
    // j = &i

   printf("the address of i %u\n",&i);
   printf("the address of j %u\n",j);
   printf("the address of j %u\n",&j);
   
   printf("the value of i %d\n",i);
   printf("the value of i %d\n",*(&i));
   printf("the value of i %d\n", *j);
   
   return 0;
}