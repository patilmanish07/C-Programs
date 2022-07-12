// Program which accepts string & count no.of capital characters.
// Input: "Marvellous Multi OS"
// Output: 4

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			iCnt++;
		}
		*str++;
	}
	return iCnt++;
}

int main()
{
	char Arr[15];
	int iRet = 0;
	
	printf("Enter the string :");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCapital(Arr);
	
	printf("Number of capital letters in string :%d",iRet);
	
	return 0;
} 