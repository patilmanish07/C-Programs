//=================================================================================================================================================================================================================================================
// Header.h
#include<stdio.h>
#include<stdbool.h>
bool CheckArmstrong(int);                     //Declarartion

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

//=================================================================================================================================================================================================================================================================
// Helper.c
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name    :-    CheckArmStrong
//	Input			 :-    Integer
//	Output			 :-    boolean(true/false)	
//	Description		 :-    It is used to check whather the no. is Armstrong or not.	
//	Author			 :-    Manish Bhupendra Patil	
//  Date 			 :-    01/07/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckArmstrong(int iNo)                //Defination
{
	int iDigCnt = 0,iDigit = 0,iSum = 0;
	int iTemp = 0;
	
	if(iNo < 0)
	{
       iNo = -iNo;
	}	   
	
	iTemp = iNo;
	
	//Calculate number of digits
		while(iNo != 0)
		{
			iDigCnt++;
			iNo = iNo / 10;
		}
		
		iNo = iTemp;
		
		
		while(iNo != 0)
		{
           iDigit = iNo % 10;
           iSum = iSum + Power(iDigit ,iDigCnt);           
		   iNo = iNo / 10;
		}

		if(iSum == iTemp)
        {
             return true;
        }
        else
		{
             return false;
		}			 
		
}	
	
//====================================================================================================================================================================================================================================================================================
// Main.c	
int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue);
	
	bRet = CheckArmstrong(iValue);
	if(bRet == true)
	{
	   printf("%d is armstrong number\n",iValue);
	}
	else
	{
		printf("%d is not armstrong number\n",iValue);
	}		
	
	return 0;
}	

//================================================================================================================================================================================================================================================================================