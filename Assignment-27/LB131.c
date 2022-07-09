//Assignemt -27
// Accept one string from user & copy contents of that string into another string.
// Input :- Marvellous Multi OS
// Output :- Marvellous Multi OS 

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest ='\0';
}


int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30];
	
	printf("Enter string :");
	scanf("%s",arr);
	
	StrCpyX(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}