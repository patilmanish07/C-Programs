// Accept one string from user & copy contents of that string into another string.
// Input :- Marvellous Multi OS
// Output :- Marvellous 

#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
	int itemp = 0;
	while((*src != '\0') && (iCnt != iCnt +1))
	{
		 itemp++;
		*dest = *src;
		src++;
		dest++;
	}
}


int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30] = {'\0'};
	
	
	StrNCpyX(arr,brr,10);
	
	printf("%s",brr);
	
	return 0;
}