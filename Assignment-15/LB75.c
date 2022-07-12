// Accept no.of rows & columns from user & display below pattern. 
// Input :- iRow - 4 & iCol - 4 
// Output :-   1	2	3	4		
//             2	3	4	5		
//             3	4	5	6		
//             4	5	6	7


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0, j = 0, i = 0;

    for(j = 1; j <= iRow;j++ )
    {   
        iCount = j;

        for(i = 0;i < iCol;i++)
        {   
            printf("%d\t",iCount);

            iCount = iCount + 1;
           
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the no of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
	
    return 0;
}
