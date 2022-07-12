// Accept no. from user & count the frequency of 4 in it.
//Input:- 2395/9440/92241
//Output:- 0/2/1

#include<stdio.h>
#include<stdbool.h>

int CountFour(int iNo)
{
	int iCnt = 0;
	
	while(iNo > 0)
	{
		if(iNo % 10 == 4)
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
	
	iRet = CountFour(iValue);
	printf("%d",iRet);
	
	return 0;
}