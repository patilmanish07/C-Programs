//Accept one string & charcter from user & retirn frequency of that character.
//Input :- Marvellous Multi OS
//charcter :- M 
//Output :- 2
//charcter :- W 
//Output :- 0

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool CountChar(char *str,char ch)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt <= ch; iCnt++)
	{
		if(*str != ch)
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
	char cValue = '\0';
	bool bRet;
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character :\n");
	scanf("%c",&cValue);
	
	bRet = CountChar(arr,cValue);
	
	if(bRet == true)
	{
		printf("Character found");
	}
	else
	{
		printf("Character not found");
	}	
	return 0;
}