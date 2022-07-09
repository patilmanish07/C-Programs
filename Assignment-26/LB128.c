//Accept one string & charcter from user & return index of firstoccurence.
//Input :- Marvellous Multi OS
//charcter :- M
//output:- 0 
//charcter :- w 
//Output :- -1
//charcter :- e 
//Output :- 4

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int FirstChar(char *str,char ch)
{
    int iCnt = -1;
	int iTemp = 0;

	while (*str!='\0')
    {
        iCnt++;
        if (*str == ch)
        {
            iTemp = iCnt;
            break;
        }
        str++;       
    }
    return iTemp;
}

int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character :\n");
	scanf("%c",&cValue);
	
	iRet = FirstChar(arr,cValue);

    printf("Charcter location is %d",iRet);	
	return 0;
}