//======================================================================================================================================================================================================================
// Header.h
// Same previous code with different Datatype as Long integer.
#include<stdio.h>
long int Power(int,int);

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//===================================================================================================================================================================================================================
//
//	  Function Name     :-   Power 	
//	  Input				:-   (Intger,Integer)	
//    OutPut			:-   Integer
//    Description		:-	 Function is used to check the power of no.
//    Author			:-   Manish  Bhupendra Patil.
//    Date  			:-   01/07/2022
//
//===========================================================================================================================================================================================================================

long int Power(int iNo1, int iNo2)
{
	long int lMult = 1;
	register int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
     return lMult;
}	 
	
//===================================================================================================================================================================================================
// Main.c 

int main()
{
	auto int lValue1 = 0;
	auto int lValue2 = 0;
	auto long int lRet = 0;
	
	printf("Enter base : \n");
	scanf("%d",&lValue1);
	
	printf("Enter power :\n");
	scanf("%d",&lValue2);
	
	lRet = Power(lValue1,lValue2);
	
	printf("Result is : %d\n",lRet);
	
	return 0;
}

//==============================================================================================================================================================================================================================