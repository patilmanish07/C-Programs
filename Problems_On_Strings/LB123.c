////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//Accept string from user and toggel the case.
// Input :- MARVELLOUS MULTI OS.
// Output :- mARVELLOUS mULTI os.

#include<stdio.h>
void strtoggelx(char *);

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c

void strtoggelx(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') &&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c

int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	strtoggelx(arr);
	
	printf("Modified string is :%s",arr);
	
	return 0;
}