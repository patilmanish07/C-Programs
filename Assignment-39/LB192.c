// Write a recursive program which accept no.from user & return largest digit.
// Input:- 87983
// Output :- 9

#include<stdio.h>

int Max(int iNo)
{
	int iCnt = 0;
	
	if(iNo != 0)
	{
		if(iNo % 10 > iCnt)
		{
			iCnt = iNo%10;
			iNo = iNo/10;
			Max(iNo);
		}
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Max(iValue);
	printf("Maximum digit is : %d\n",iRet);
	
	return 0;
}