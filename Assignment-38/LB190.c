// write a recursive program which accepts no.from user & return product of digits.
// Input:- 523
// Output:- 30

#include<stdio.h>

int Mult(int iNo)
{         
	static int iCnt = 0;
	static int iMult = 1;
	
	if(iNo != 0)           
	{
	    return (iNo % 10 * Mult(iNo / 10));	
	}
	else
	{
		return 0;
	}
	return iNo;
			
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	printf("Product of no.is %d\n",iRet);
	
	return 0;
}
