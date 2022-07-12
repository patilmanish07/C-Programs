// Accept N nos. from user & take another no.as No,check whether No is present or not.
// Input :- N - 6
// No:- 66
// Elements : 85-66-3-66-93
// Output :- TRUE
// No:- 12
// Elements : 85-66-3-66-93
// Output :- FALSE

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
		  break;
		}	
	}
    if(iCnt == iLength)	
    {
		return false;
	}
    else
	{
         return true;
	}
}


int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	int *ptr = NULL;
	bool bRet;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter thr values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the element to find :\n");
	scanf("%d",&iValue);
	
	bRet = Check(ptr,iSize,iValue);
	if(bRet == true)
	{
		printf("Element is there \n");
	}
	else
	{
		printf("Element is not there \n");
	}
	

	
	free(ptr);
	
	return 0;
}