//===============================================================================================================================================================================================================================================================================
// Header.h
#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int);                 //Declarartion

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//=======================================================================================================================================================================================================================================================================================
// Helper.c
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Function Name 	  :-  CheckPalindrome		
//	 Input			  :-  Integer		
//	 OutPut			  :-  Boolean(True/False)		
//	 Description	  :-  Function is used to  check whether the no.is  palindrome or not.(121/232/737)
//   Author			  :-  Manish Bhupendra Patil
//   Date			  :-   01/07/2022	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPalindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
    }
	
	iTemp = iNo;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;          
        iNo = iNo / 10;
    }
     if(iRev == iTemp)
     {
        return true;
     }
     else
     {
        return false;
     }		 
}	

//================================================================================================================================================================================================================================================
// Main.c
int main()
{
	int iValue = 0;
	bool bRet;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPalindrome(iValue);

    if(bRet == true)
	{
        printf("%d is palindrome number\n",iValue);
	}
    else
    {
       printf("%d is not a palindrome number\n",iValue);		
	}
	return 0;
}

//====================================================================================================================================================================================================================================