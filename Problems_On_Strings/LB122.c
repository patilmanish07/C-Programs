////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h


//Accept string from user and convert it into uppercase.
// Input :- marvellous multi os.
// Output :- MARVELLOUS MULTI OS.

#include<stdio.h>
void struprx(char*);

//////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c

void struprx(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str--;
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Main.c

int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	struprx(arr);          //Function call
	
	printf("Modified string is :%s",arr);
	
	return 0;
}
