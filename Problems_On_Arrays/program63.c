//  Problems on N Numbers of Arrays.

#include<stdio.h>

int main()
{
	auto int Arr[5];
	
	printf("Enter elements :\n");
	register int iCnt = 0;
	
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}	
	
	printf("Elements of array are : \n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
	
	return 0;
}	