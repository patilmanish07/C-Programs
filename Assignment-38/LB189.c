// write a recursive program which accepts no.from user & return factorials.
// Input:- 5
// Output:- 120

#include<stdio.h>

int Fact(int iNo)
{         
	static int iFact = 0;
	
	if(iNo > 0)
	{
		iFact = iFact * iNo;
		iNo--;
		Fact(iNo);
	}
	return iFact;		
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);
	printf("factorial is %d\n",iRet);
	
	return 0;
}
