// Accept no. from user & display no. is odd or even.

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == false)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}