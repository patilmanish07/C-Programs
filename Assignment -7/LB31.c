//Accept number from user & display sum of even digits.

#include<stdio.h>
 
int SumEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

     for(iCnt = 1; iCnt < iNo; iCnt++)
	 {
		iCnt = iNo % 10;	
      }
		return iCnt;
}	

	 
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = SumEven(iValue);
	printf("Summation of even digits are :%d\n",iRet);
	
	return 0;
}