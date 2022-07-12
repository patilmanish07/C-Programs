///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//Accept string from user and count whitespaces.
// Input :- marvellous
// Output :- 0
// Input :- program whitespaces
// Output :- 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int CountWhite(char *)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c
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

////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c
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