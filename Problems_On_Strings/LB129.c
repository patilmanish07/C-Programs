//Accept one string & charcter from user & return index of lastoccurence.
//Input :- Marvellous Multi OS
//charcter :- M
//output:- 11 
//charcter :- w 
//Output :- -1;

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int LastChar(char *str,char ch)
{
	int iCnt = 0;
	int iTemp = 0;

	for(iCnt = 0; iCnt <= ch; iCnt++)
	{
		if(*str == '\0')
		{
			iTemp = iCnt;
		}
		str++;
	}
	return iTemp;
}

int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character :\n");
	scanf("%c",&cValue);
	
	iRet = LastChar(arr,cValue);

    printf("Charcter location is %d",iRet);	
	return 0;
}