// Accept N no. from accept range,display all elements from range
// Input:- N - 6
// start - 60
// out - 90
// Elements :- 85-66-3-76-88-95
// Output: - 66-76-88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((iLength >= iStart) && (iLength <= iEnd))
		{
			printf("%d\n",Arr[iCnt]);
		}	
	}		
}


int main()
{
	int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	printf("Enter the starting point :\n");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point :\n");
	scanf("%d",&iValue2);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter thr values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Range(ptr,iSize,iValue1,iValue2);
	
    free(ptr);
	
	return 0;
}