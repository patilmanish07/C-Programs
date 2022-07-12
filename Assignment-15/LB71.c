// Accept no.of rows & columns from user & display below pattern. 
// Input :- iRow - 4 & iCol - 4 
// Output :-  1 2 3	4
//            5	6 7 8	
//        	  9 1 2 3 
//            4 5 6 7

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0,j = 0,i = 0;

    for(j = 0;j < iRow;j++ )
    {   

        for(i = 0;i < iCol;i++)
        {   
            
            iCount++;

            if(iCount > 9)
            {
                iCount = 1;
            }
           
            printf("%d\t",iCount);
        }
        printf("\n");
        
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter the no of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}