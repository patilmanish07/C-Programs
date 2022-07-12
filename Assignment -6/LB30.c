// Accept no. from user & count the frequency of such a digit which is less than 6.
//Input:- 2395/9440/96672
//Output:- 3/3/1

#include<stdio.h>

int Count(int iNo)
{
	int iCnt = 0;
	
	while(iNo > 0)
	{
		if(iNo % 10 < 6)
		iCnt++;
        iNo = iNo/10;	
	}
	return iCnt++;
	 
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	printf("%d",iRet);
	
	return 0;
}