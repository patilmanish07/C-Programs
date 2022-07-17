// Code used to demonstrate the year is leap year or not.
#include<stdio.h>

int main()
{
	int year = 0;
	
	printf("Enter the year you want to search wheather it is leap or not :\n");
    scanf("%d\n",&year);
	
	if(year % 4 == 0)
	{
		printf("Year is leap year\n",year);
	}
	else if(year % 100 == 0)
	{
		printf("Year is leap year\n",year);
	}
	else if(year % 400 == 0)
	{
		printf("Year is leap year\n",year);
	}
	else
	{
		printf("This is not leap year");
	}
	return 0;
}