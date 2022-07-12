//Accept no. from user & display multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iMult = iMult * iNo;
	}
     return iMult;	
}
	
int main()
{
	int iValue = 0;
	int iRet = 0; 
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	printf("Multiplication is :%d\n",iRet);
	return 0;
}	