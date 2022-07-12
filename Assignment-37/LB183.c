// write a recursive program which display below pattern.
// Input:- 5
// Output:- 5 4 3 2 1.

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 5;          
	
	if(iCnt >= 1)           
	{
		printf("%d\t",iCnt);
		iCnt--;
		Display(iNo);          
	}
}


int main()
{
	int iValue = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}