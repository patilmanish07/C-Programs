// Accept no.from user & print that no. of even no.s on screen.

#include<stdio.h>
void PrintEven(int iNo)
{
	int iNum = 0;
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

    for(iCnt = 1; iCnt < iNo; iCnt)
	{
		if((iNo % iCnt) == 0)
		{
			iNum = iNum + iCnt;
		}
    }
}	
	
int main()
{
	int iValue = 0;
	
	printf("Enter the  number :\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);	
	return 0;
}	