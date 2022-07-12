//Same code just different datatype as Unsigned long Integer.

#include<stdio.h>

unsigned long int Power(int iNo1, int iNo2)
{
	unsigned long int lMult = 1;
	register int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
     return lMult;
}	 
	
int main()
{
	auto int lValue1 = 0;
	auto int lValue2 = 0;
	auto unsigned long int lRet = 0;
	
	printf("Enter base : \n");
	scanf("%d",&lValue1);
	
	printf("Enter power :\n");
	scanf("%d",&lValue2);
	
	lRet = Power(lValue1,lValue2);
	
	printf("Result is : %d\n",lRet);
	
	return 0;
}