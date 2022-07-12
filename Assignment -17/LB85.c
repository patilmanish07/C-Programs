/*
Pattern Printing 
 Input : Row 4 Column 4
 Ouput : 

   1  2  3  4
      2  3  4  
         3  4
            4   
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0;
	
	for(i = iRow; i >= 1 ; i--)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%d\t",j);
		}
         printf("\n");
    }
}	

int main()
{
	int iValue1 = 0, iValue2 =0;
	
	printf("Enter thr number of Rows :");
	scanf("%d",&iValue1);
	
	printf("Enter thr number of columns :");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
} 