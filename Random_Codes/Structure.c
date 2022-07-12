// Program used to demonstrate the concept of Structure in C lang.
#include<stdio.h>

// Structure Declaration

struct Demo
{
   int iNo;
   float fValue;
   int iValue;
 };
   int main()
{
   // structure object creation 
   struct Demo obj;
   
   // Object initialization
   obj.iNo = 11;
   obj.fValue = 10.11;
   obj.iValue = 21;
   
   printf("%d\n",obj.iValue);     //21
   printf("%d\n",sizeof(obj));    //12
   
   printf("%d\n",obj.fValue);     //10.11
   printf("%d\n",sizeof(obj));    //12
   
   
   printf("%d\n",obj.iNo);        //11
   printf("%d\n",sizeof(obj));    //12
    
   return 0;
}