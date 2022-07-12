// Accept no.from user & display all such elemnts which are divisible by 5
//Input:- 6
//elements:- 85-66-3-80-93-88
//Output:- 85-80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt]% 5)== 0)
		{
			printf("Numbers divisible by 5 are : %d\n",Arr[iCnt]);
		}
		else
		{
			return;
		}
	}
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	int *ptr = NULL;
	int iLength = 0;
	
	printf("enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter elements :\n");
	
	for(iCnt = 0; iCnt< iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	free(ptr);
	
	return 0;
}