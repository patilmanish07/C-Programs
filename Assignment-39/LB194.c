// Write a recursive program which accept no.from user & return smallest digit.
// Input:- 87983
// Output :- 3

#include<stdio.h>

int Min(int iNo)
{
	static int iMin = 0;
	int iCnt = 0;
	
	if(iNo != 0)
	{
		if(iNo % 10 > iCnt)
		{
			iCnt = iNo%10;
			iNo = iNo/10;
			Min(iNo);
		}
		return iCnt;
	}	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Min(iValue);
	printf("Smallest digit is :%d\n",iRet);
	return 0;
}