//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition of two numbers.
//  Input         : (Integer,Integer) values.
//  Output        :  Integer.
//  Description   :  We have added two numbers.
//  Author        :  Manish Bhupendra Patil.     
//  Date          :   1/07/2022
//
/////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int Addition(
                int iNo1,    //First input argument. 
                int iNo2     //Second input argument.
            )
{
    int iReturn = 0;         //Local variable to store result.
    iReturn = iNo1 + iNo2;

    return iReturn;        //Return the value to the Caller.
}

