// write a recursive program which display summation of digits.
// Input:- 879
// Output:- 24

#include<stdio.h>

int Sum(int iNo)
{         	
	 static int iSum = 0;
	 int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		Sum(iNo);
	}
	return iSum;
		
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Sum(iValue);
	printf("Sum of digits are %d",iRet);
	
	return 0;
}
