//Accept no.from user & display non-factors of that number.

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
       iNo = -iNo;
	}	   
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt)!=0)
		{	
		   printf("%d\n",iCnt);
		}
	}		
}	

int main()
{
	int iValue = 0;

	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	DisplayNonFactors(iValue);       //Input=8 
	
	return 0;
}