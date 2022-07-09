// Accept one string from user & copy small characters of that string into another string.
// Input :- "Marvellous Multi OS"             
// Output :- "arvellous multi"

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	 while(*src != '\0')
    {
		if(*src != '\0')
		{
			*dest = ' ';
			dest++;
		}
	   if((*src >='a')&&(*src <='z'))
	   {
		   *src = *dest;
		   dest++;
	   }
	   dest++;
	}
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
    char brr[30];
	
	StrCpySmall(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}









   















































