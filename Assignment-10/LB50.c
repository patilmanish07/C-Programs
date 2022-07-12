// Accept N nos. from user and return product of all odd elements.
// Input:- N - 6
// Elements :- 15-66-3-70-10-88
// Output: - 45
// N:- 6
// Elements :- 44-66-72-70-10-88
// Output: - 0

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iLength % 2 != 0)
		{
			printf("%d\n",Arr[iCnt]);
		}	
	}		
}

int main()
{
	int iSize = 0,iRet = 0, iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter the values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Product(ptr,iSize);
	
	printf("Product is %d",iRet);
	
    free(ptr);
	
	return 0;
}