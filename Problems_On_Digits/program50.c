/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

#include<stdio.h>
int SumDigits(int);           //Declaration

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name 		:- SumDigits
//	Input				:- Integer
//	Output				:- Integer
//	Description			:- It is used to find the sum of given digits.
//	Author				:- Manish Bhupendra Patil
//	Date				:- 01/07/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
	    iSum = iSum + iDigit;
		iNo = iNo/10;
	}	
    return iSum;
}	
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
    iRet = SumDigits(iValue);

    printf("Summation of digits are : %d\n",iRet);
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////