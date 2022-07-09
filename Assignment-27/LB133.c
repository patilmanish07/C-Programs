// Accept one string from user & copy capital characters of that string into another string.
// Input :- "Marvellous Multi OS"             
// Output :- "MMOS"

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	 while(*src != '\0')
    {
		if((*src >= 'A') && (*src <= 'Z'))
	   {
		   *src = *dest;
		   dest++;
	   }
	   dest++;
	}	   
}


int main()
{
	char arr[30] = "Marvellous multi OS";
	char brr[30];
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}
