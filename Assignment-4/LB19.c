//Accept no.from user display summation of  non-factors.
// Input: 10
// Output: 37

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 2; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}	
	
int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter the number :\n");
  scanf("%d",&iValue);
  
  iRet = SumNonFact(iValue);
  printf("Summation of non factors are:%d",iRet);
  return 0;
}