#include<stdio.h>
/*
typedef int BOOL
#define TRUE 1
#define FALSE 0
*/
#include<stdbool.h>

 bool Check(int iNo)
 {
	if((iNo % 5)==0)
    {
	    return true;
	}
    else 
	{
		return false;
    }
 }	


int main()
{
   int iValue = 0;
   bool bRet = 0;
   
   printf("Enter the number");
   scanf("%d",&iValue);
   
   bRet = Check(iValue);
   
   if(bRet == true)
   {
	   printf("Divisible by 5");
   }
   else
   {
	   printf("Not Divisible by 5");
   }	   
  
  return 0;
}