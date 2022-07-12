/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h

// Accept no. from user check weather that number it even or odd.
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int);                 // Declaration

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name     :-    CheckEven
//	Input 			  :-    Integer value. 	
//	Output			  :-	Boolean Value(true/false)
//	Description       :-    This Function is used to check number is even or odd.
//  Author 			  :-    Manish Bhuepndra Patil	
//  Date 			  :-    1/07/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////

 bool CheckEven(int iNo)                 //Defination
 {
	 if((iNo % 2)==0)
	 {
		 return true;
	 }
     else 
	 {
		return false;
	 }		
  }	 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c

int main()
{
	int iValue = 0;
	bool bRet = false;       //default value of boolean is false.

    printf("Enter number\n");
    scanf("%d",&iValue);             

	bRet = CheckEven(iValue);
	
	if(bRet == true)
	{
		printf("%d is even number\n",iValue);
	}
    else
    {
		printf("%d is odd number\n",iValue);
	}
	
	return 0;
}	