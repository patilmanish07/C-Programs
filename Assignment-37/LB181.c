// write a recursive program which display below pattern.
// Input:- 5
// Output:- * * * * *

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;          
	
	if(iCnt <= 5)           
	{
		printf("*\t");
		iCnt++;
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