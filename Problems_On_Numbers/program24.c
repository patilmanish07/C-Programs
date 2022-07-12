/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h

//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

#include<stdio.h>
#include<stdbool.h>
bool Check(int);                    //Declaration

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name       :- Check()
//	Input               :- Integer value 
//  OutPut 				:- boolean Value(True/False)
//  Description			:- It is used to check wheather the no. is divisible by 3 & 5.
//	Author              :- Manish Bhupendra Patil
//  Date                :- 1/07/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

 bool Check(int iNo)                    //Defination.
 {
	 if(
	    ((iNo % 3)==0) &&
	    ((iNo % 5)==0)
       )		
	{
      return true;
	} 
     else
	 {
        return false;
	 }	
  }	 

  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c

int main()
{
	int iValue = 0;
	bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);             

	bRet = Check(iValue);                //function call
	
	if(bRet == true)
	{
		printf("%d is divisible by 3 & 5\n",iValue);
	}
    else
    {
		printf("%d is not divisible by 3 & 5\n",iValue);
	}
	
	return 0;
}	
