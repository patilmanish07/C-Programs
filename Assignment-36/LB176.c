// write a recursive program which display below pattern.
// Output:- * * * * *

#include<stdio.h>

void Display()
{
	static int iCnt = 0;          
	
	if(iCnt < 4)           
	{
		printf("*\t");
		iCnt++;
		Display();          
	}
}


int main()
{
	Display();
	
	return 0;
}