// Accept N no.from user and another no.as No return index of first occurence of that no.
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
	int iCnt = 0; 
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
     return iCnt;	
}	

int main()
{
	int iSize = 0, iCnt = 0,iValue = 0, iRet = 0;
	int *p = NULL;
	
	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	printf("Enter thr values :\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    iRet = FirstOcc(p, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element first occured at : %d\n",iRet);
    }
     free(p);

    return 0;
}