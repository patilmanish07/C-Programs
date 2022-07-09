//Accept string from user and count whitespaces.
// Input :- marvellous
// Output :- 0
// Input :- program whitespaces
// Output :- 1

#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str == ' '))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	iRet = CountWhite(arr);
	
	printf("Modified string is :%d",iRet);
	
	return 0;
}