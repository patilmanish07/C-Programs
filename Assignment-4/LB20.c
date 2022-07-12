// Accept no. & display difference between factors & non-factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iFactSum = 0;
    int iNFactSum = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {   

        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNFactSum = iNFactSum + iCnt;

        }
    }

    return iFactSum - iNFactSum;
}



int main()
{
    int iValue = 0;
    int iRev = 0;

    printf("Enter the no:");
    scanf("%d",&iValue);

    iRev = FactDiff(iValue);

    printf("%d",iRev);
    
    return 0;
}