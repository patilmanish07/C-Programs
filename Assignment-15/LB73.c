// Accept no.of rows & columns from user & display below pattern. 
// Input :- iRow - 5 & iCol - 5 
// Output :-  a b c d e
//            1 2 3 4 5
//            a b c d e
//            1 2 3 4 5 
//            a b c d e
//

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCount = 0, j = 0, i = 0;
    char ch = '\0';

    for(j = 1;j<= iRow; j++)
    {   
        iCount = 1;
        ch = 'a';
		
        for(i = 0;i < iCol;i++)
        {   
            if(j % 2 == 0)
            {
                printf("%d\t",iCount);
                iCount++;
            }
            else
            {
                printf("%c\t",ch);
                ch++;
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