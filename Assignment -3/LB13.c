// Accept no. & print even factors of that no.

//Incomplete


#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
	int i = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
    }		
	
	for(i = 1; i<= (iNo/2); i++)
	{
		if(iNo && i)
		{
			printf("%d\n",i);
		}
	}		
}	

int main()
{
	int iValue = 0;
	
	printf("Enter the number :");
	scanf("%d",&iValue);
	
	DisplayEvenFactor(iValue);
	return 0;
}