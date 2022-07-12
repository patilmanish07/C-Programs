///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Header.h
// Accept no.from user & check its prime no.or not.
#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int);         //Declaration.


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Helper.c
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//	 Function Name  	:-     CheckPrime
//	 Input				:-     Integer 	
//	 Output				:-     Boolean(true/false)
//   Description		:-     This function is used to check wheather the no.is prime or not. 
//   Author				:-     Manish Bhupendra Patil
//   Date				:-     01/07/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)                //Defination
{
	int iCnt = 0;
	if( iNo < 0)
	{
		iNo = -iNo;
    }

	for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
		if(iNo % iCnt == 0)
        {
            break;
		}	
	}
	if((iCnt == (iNo/2)) + 1)
	{
		return true;
	}
    else
    {
		return false;
	}	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Main.c
int main()
{
	int iValue = 0;
	bool bRet; 
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPrime(iValue);
	if(bRet == true)
	{
		printf("%d is a prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
    }		
	return 0;
}	
