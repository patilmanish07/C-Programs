//================================================================================================================================================================================================================
// Header.h
#include<stdio.h>
int CountDigits(int);                   //Declaration
 

 //==============================================================================================================================================================================================
 // Helper.c

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //
 //		Function Name	      :-   CountDigits
 //		Input				  :-   (Integer,Integer)   	
 //		Output				  :-   Integer	
 //		Description			  :-   It is used to convert the number into digit.
 //		Author				  :-   Manish Bhupendra Patil
 //     Date				  :-   01/07/2022
 //
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 int CountDigits(int iNo)                      //Defination
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
	   iCnt++;
	   iNo = iNo / 10;
	}
	 return iCnt++;
}	

//===================================================================================================================================================================================
// Main.c	
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);                // Function call
	printf("Number of digits are: %d\n",iRet);
	return 0;
}	

//===========================================================================================================================================================================================