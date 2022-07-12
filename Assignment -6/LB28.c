// Accept no. from user & count the frequency of 2 in it.
//Input:- 2395/1018
//Output:- 1/0

#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
{
	int iCnt = 0;
	
	while(iNo > 0)
	{
		if(iNo % 10 == 2)
		iCnt++;
        iNo = iNo/10;	
	}
	return iCnt++;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	printf("%d",iRet);
	
	return 0;
}