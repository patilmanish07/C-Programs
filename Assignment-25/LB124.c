//Accept string from user and display only digits of that string.
// Input :- "marve89llous121".
// Output :- 89121.

#include<stdio.h>

void DisplayDigit(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 48) && (*str <= 57))
		{
	        iCnt++;
		}
		str++;
	}
	
}

int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
     DisplayDigit(arr);
	
	printf("Modified string is :%s",arr);
	
	return 0;
}