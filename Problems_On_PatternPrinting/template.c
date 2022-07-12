//========================================================================================================================================================================
//Header.h 

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

#include<stdio.h>

void Display(int);

//========================================================================================================================================================================
//Main.c

int main ()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    Display(iValue);  

    return 0;
}
//========================================================================================================================================================================
//Helper.c

void Display(int no)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        printf("*\t");
    }
}