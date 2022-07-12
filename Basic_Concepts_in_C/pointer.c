// Program used to demonstrate the concept of Pointer in C.
#include<stdio.h>

int main()
{
    int iValue = 21;
    int *iptr = &iValue;	
	
	float fValue = 10.11;
	float *fptr = &fValue;
	
    printf("%d\n",*iptr);
	printf("%d\n",&iValue);
    printf("%d\n",iptr);	
    printf("%d\n",sizeof(iValue));
    printf("%d\n",sizeof(iptr));
    printf("%d\n",sizeof(*iptr));
	
    printf("%f\n",*fptr);
	printf("%f\n",&fValue);
    printf("%f\n",fptr);
	printf("%f\n",sizeof(fValue));
	printf("%f\n",sizeof(fptr));
	printf("f\n",sizeof(*fptr));
	
   
    return 0;
}