// Accept no. & return multiplication of all digits.
//Input :- 2397/1018/9440
//Output :- 270/8/144

#include<stdio.h>

int MultDigits(int iNo)
{
	int iCnt = 0, iMult = 1;
	iMult = (iNo == 0);
	
	while(iNo != 0)
	{
		iMult = iMult *(iNo % 10);
		iNo = iNo/10;
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	printf("%d\n",iRet);
	
	return 0;
}