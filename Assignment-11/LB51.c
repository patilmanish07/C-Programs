// Accept n nos. from user & return maximum number.
// Input : 5
// Elements :- 85-66-3-66-93
// Output :- 93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iMax = 0, iCnt = 0;		
	
	for(iCnt = 0; iCnt <iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}	
	}	
     return iMax;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter thr values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Maximum(ptr,iSize);
	
	printf("Largest number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}