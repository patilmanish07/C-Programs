// write a recursive program which display below pattern.
// Input:- 6
// Output:- A B C D E F.

#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'A';          
	
	if(ch <= 'F')           
	{
		printf("%c\t",ch);
		ch++;
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