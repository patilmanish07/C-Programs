// Write a recursive program which accept no.from user & return smallest digit.
// Input:-  523
// Output :- 325

#include<stdio.h>

int Reverse(int iNo)
{
	 if(iNo != 0)
	{
		printf("%d\t",iNo%10);
		iNo = iNo/10;
		Reverse(iNo);
	}
	return iNo;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	printf("Updated number is :",iRet);
	return 0;
}