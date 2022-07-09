//accept string from user & copy characters into another string by converting all small to capital.
// Input:- "Marvellous Python 2"
// Output:- "MARVELLOUS PYYTHON 2"

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	while(*src != '\0')
   {
	   *dest = *src;
	   src++;
	   dest++;
	   
	    if((*src >= 'a')&&(*src <= 'z'))
		{
			*src = *src - 32;
			*dest = *src;
			dest++;
		}
		else
		{
			*dest = *src;
			 dest++;
		}
		src++;  
   }			
}

int main()
{
	char arr[30] = "Marvellous Python 2";
	char brr[30];
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}