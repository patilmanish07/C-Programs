// Program which accepts string & count no.of small characters.
// Input: "Marvellous"
// Output: 9

#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
	   if(*str >= 97 && *str <= 122)
	   {
		   iCnt++;
	   }
	   str++;
	}
	return iCnt++;
}

int main()
{
	char Brr[15];
	int iRet = 0;
	
	printf("Enter the string :");
	scanf("%[^'\n']s",Brr);
	
	iRet = CountSmall(Brr);
	
	printf("Number of small characters in string are :%d",iRet);
	return 0;
}