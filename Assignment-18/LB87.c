/*
    Accept number of rows and number of columns from 
    user and display below pattern.
    Input : iRow = 4 iCol = 4
    Output : 
                * * * #
                * * # @
                * # @ @     
                # @ @ @
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iR = 1, iC = 1;

    for(iR = 1; iR <= iRow; iR++)
    {
        for(iC = iCol; iC >= 1; iC--)
        {
            if (iR == iC)
            {
                printf("#\t");            
            }
            else if(iR<iC)
                printf("*\t");  
            else
                printf("@\t");            
        }
        printf("\v\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}