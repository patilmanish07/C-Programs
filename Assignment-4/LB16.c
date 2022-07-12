// Accept no. from user & display multiplication of factor of that no.

#include<stdio.h>

int MultiFact(int iNo)
{
    int iFactMul = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iFactMul = iFactMul * iCnt;
        }
    }

    return iFactMul;

}



int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}