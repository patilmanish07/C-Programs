// write a recursive program which accept string from user & count white spaces.
// Input:- HE llo WOr lD
// Output:- 3

#include<stdio.h>

int WhiteSpace(char *str)
{
     static int iCnt = 0;
	
	if(*str != '\0')
	{	
	  if((*str == ' '))
		{
			iCnt++;
			WhiteSpace(str);
		}
		str++;
		
	}
	return iCnt;
}


int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter string :");
	scanf("%c",arr,20);
	
	iRet = WhiteSpace(arr);
	
	printf("Number of whitespaces in string are :%d\n",iRet);
	return 0;
}