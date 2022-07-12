// Program which accepts string & check it contains vowels or not.
// Input: "marvellous"
// Output: TRUE
// Input: "xyz"
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	if((*str == 'A') && (*str == 'E') && (*str == 'I') && (*str == 'O') && (*str == 'U'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[15];
	bool bRet;
	
	printf("Enter the string :");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkVowel(Arr);
	if(bRet == true)
	{
		printf("contains vowel");
	}
	else
	{
		printf("not contain vowels");
	}
	return 0;
}