#include "Header.h"             // Userdefined header file inclusion.

//================================================================================================================================================================================
// Main.c	 
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = SumEven(iValue);               //Function call
	printf("Summation of even digits are :%d\n",iRet);
	
	return 0;
}	
	
//============================================================================================================================================================================================	