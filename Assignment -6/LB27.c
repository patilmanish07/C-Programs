// Accept no.from user check wheather it contains 0 in it or not. 
// Input:- 2395/1018
// Output:- There is no zero/ It contains zero.

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	if(iNo < 0)
	{
        iNo = -iNo;
	}
	
	if(iNo == 0)
	{
      return true;
	}
	while(iNo > 0) 
	{
       if(iNo % 10 == 0)
         return true;
        iNo/10;
    }
    return false;
	
}

int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	if(bRet == true)
	{
		printf("It contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}














