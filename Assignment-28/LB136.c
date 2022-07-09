//program accept string from user & copy characters into another string in reverse order.
// Input:- "Marvellous Python"
// Output:- "nohtyP suollevram"

#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
	 char *end = NULL;
    end = src;

    while (*end != 0)
    {
        end++;
    }
    end--;

    while (*src != 0)
    {
        *dest = *end;
        dest++;
        end--;
        src++;
    }
	
}

int main()
{
	char arr[30] = "Marvellous Python";
	char brr[30];
	
	StrCpyRev(arr,brr);
	
	printf("%s",brr);
	
	return 0;
}