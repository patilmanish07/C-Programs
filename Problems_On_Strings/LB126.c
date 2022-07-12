//Accept one string & charcter from user & check wheather it is present in string or not.
//Input :- Marvellous
//charcter :- e 
//Output :- TRUE
//charcter :- w 
//Output :- FALSE

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool ChkChar(char *str,char ch)
{
	 while (*str!='\0')
    {
        if (*str == ch)
        {
            break;
        }
         str++;       
    }
    if (*str == '\0')
    {
         return false;
    }
    else
          return true;
		  
}

int main()
{
	char arr[20];
	char cValue = '\0';
	bool bRet;
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character :\n");
	scanf("%c",&cValue);
	
	bRet = ChkChar(arr,cValue);
	
	if(bRet == true)
	{
		printf("Character found");
	}
	else
	{
		printf("Character not found");
	}	
	return 0;
}