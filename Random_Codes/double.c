 

// use of pointer using the datatype double...... 
 
#include<stdio.h>

int main()
{
   double dValue = 20.11;
   double *dptr = &dValue;
   
   printf("The Address of dValue%u\n",&dValue);
   printf("The Address of dptr%u\n",&dptr);
   printf("The value of dValue%d\n",dValue);
   printf("The value of dptr%d\n",dptr); 
   printf("The value of dValue%d\n",*dptr); 

   return 0;
}