// Pattern Printing
// Input : 5
// Output : A  B  C  D  E

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	for(iCnt = 'A' ; iCnt <= 'E'; iCnt++)
	{
         printf("%c\t",iCnt);
    }		 
}
	
int main()
{
	int iValue = 0;
	
	printf("Enter the number of elements :");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	return 0;
}	