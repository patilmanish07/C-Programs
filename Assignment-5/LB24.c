//Accept no.from user & display Summation of non-factors of that number.

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
       iNo = -iNo;
	}	   
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt)!=0)
		{	
		  iSum = iSum + iCnt;	
		   printf("%d\n",iCnt);
		}
	}	  return iSum;	
}	

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	SumNonFact(iValue);       //Input= 8

    printf("%d",iRet);	
	
	return 0;
}