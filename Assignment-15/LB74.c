// Accept no.of rows & columns from user & display below pattern. 
// Input :- iRow - 5 & iCol - 5 
// Output :-    1	2	3	4	5	
//             -1  -2  -3  -4  -5	
//              1	2	3	4	5	
//             -1  -2  -3  -4  -5	
//              1	2	3	4	5


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0,j = 0,i = 0;
   

    for(j = 1; j <= iRow;j++ )
    {   
            if(j % 2 == 0)
            {
                iCount = -1;
            }
            else
            {
                iCount = 1;
            }

        for(i = 0; i < iCol; i++)
        {   
            if(j % 2 == 0)
            {    printf("%d\t",iCount);

                iCount = iCount - 1;
            }
            else
            {
                printf("%d\t",iCount);

                iCount = iCount + 1;
            }
           
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