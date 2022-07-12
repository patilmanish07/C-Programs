// Accept no.of rows & columns from user & display below pattern. 
// Input :- iRow - 4 & iCol - 4 
// Output :- 2	4	6	8	
//         	 1  3	5	7	
//           2	4	6	8	
//	         1  3	5	7

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0,j = 0,i = 0;

    for(j = 1; j <= iRow; j++ )
    {   
            if(j % 2 == 0)
            {
                iCount = 1;
            }
            else
            {
                iCount = 2;
            }

        for(i = 0; i < iCol; i++)
        {   
            printf("%d\t",iCount);

            iCount = iCount + 2;
           
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