//accept string from user & copy characters into another string by converting all capital to small.
// Input:- "Marvellous Python 2"
// Output:- "marvellous python 2"

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
	while((*src != '\0') &&(*dest != '\0'))
	{	
        if (*src >= 'A' && *src<= 'Z')
        {
            *src = (*src) + 32;
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
	
	StrCpySmall(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}