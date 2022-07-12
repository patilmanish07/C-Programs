//Accept N no. & return summations of even & odd elements.
// Input- 6
// elements- 85,66,3,80,93,88
// Output- 53(234-181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt = 0;
	int even = 0;
	int odd = 0;
	
	for(int iCnt = 0; iCnt<iLength; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			even += Arr[iCnt];
		}
		else
		{
			odd += Arr[iCnt];
		}
    }	
}

int main()
{
	int iSize = 0,iRet = 0, iCnt =0, iLength = 0;
	int *ptr = NULL;
	
	printf("enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter %d elemnts :\n",iLength);
	
	for(iCnt = 0; iCnt< iLength; iCnt++)
	{
		printf("Enter element :%d",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Difference(ptr,iSize);
	printf("Result is %d",iRet);
	
	free(ptr);
	
	return 0;
}