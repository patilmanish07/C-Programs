//Accept number from user & display count of odd digits.
// Input:- 2395/1018/8462
// Output:-1/2/4

#include<stdio.h>
 
int CountOdd(int iNo)
{
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

    int iCnt = 0,n = 0;
	while(iNo != 0)
    {
		iCnt = iNo % 10;
		n = iNo % 10;
		if(n % 2 != 0)
		{
			iCnt++;
		}
	   n = n/10;	
	}
	return iCnt++;
}	

	 
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	printf("%d\n",iRet);
	
	return 0;
}