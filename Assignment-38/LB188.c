// write a recursive program which accepts string from user & count no.
// Input:- Hello
// Output:- 5

#include<stdio.h>

int Strlen(char str[])
{         
	static int iCnt = 0;
	
	if(*str != '\0')           
	{
		iCnt++;
		str++;
		Strlen(str);
	}
	return iCnt;		
}


int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string :");
	scanf("%s",arr);
	
	iRet = Strlen(arr);
	printf("No.of characters in string are %d :",iRet);
	
	return 0;
}
