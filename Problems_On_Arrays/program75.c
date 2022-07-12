//Accept nos from user & return Minimum integers.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int iMin = 0, iCnt = 0;
	if(iLength < 0)
	{
        iLength = -iLength;
	}		
	
	for(iCnt = 0; iCnt <iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}	
	}	
     return iMin;
} 

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter thr values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Minimum(ptr,iSize);
	
	printf("Minimum number is : %d\n",iRet);
	free(ptr);
	
	return 0;
}