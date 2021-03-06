//===================================================================================================================================================================================================================================
// Header.h

// Pattern Printing
// Input :  Row = 4    column = 4
// Output :
/*
  *  *  *  *
  *  *  *  *
  *  *  *  *
  *  *  *  *
*/

#include<stdio.h>
void Display(int,int);
//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//=================================================================================================================================================================================================================================
// Helper.c
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	:-   Display
//		Input			:-   Integer
//		Output			:-   Pattern
//		Description		:-   Function is used to Display the pattern
//		Author			:-   Manish Bhuependra Patil
//		Date			:-   01/07/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	//    1       2        3
	for(i = 1; i <= iRow; i++)  //Outer
	{ 
        //      1        2     3
	    for(j = 1; j<= iCol; j++)  //Inner
	   {
           printf("*\t");   //4
	   }
       printf("\n");
	}
}


//=============================================================================================================================================================================================================================================================================================================================================================
// Main.c
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows :\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns :\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);           //Consider Display(4)
	
	return 0;
}

//=========================================================================================================================================================================================================================================================================================================================================================================