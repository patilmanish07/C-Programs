// Accept one string from user & copy contents of that string into another string.
// Input :- "Marvellous Infosystems"
//            "Logic Building"             
// Output :- "Marvellous Infosystems Logic Building"

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
	 while(*src != '\0')
    {
	   src++;
    }
	*src = ' ';
	src++;
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
}


int main()
{
	char arr[30] = "Marvellous Infosystems";
	char brr[30] = "Logic Building";
	
	StrCatX(arr,brr);
	
	printf("%s",arr,brr);
	
	return 0;
}