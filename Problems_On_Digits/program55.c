//Accept two no.from user & return the value of A raised B.
// Input : 2  4
// Output:  16(2* 2* 2 *2)


/* START
	   Accept onr number as no1
	   Accept another number as no2
	   
	   Create onr variable as Mult
	   Set the value 1 int the variable Mult
	   
	   Create onr counter as cnt
	   Set counter to 1
	   
	   LOOP:
	       Iterate till counter is less than or equal to no2
		        mult = Mult * no1
				increment the counter by 1
        Goto LOOP				  
	 
	         Display the value of mult
	END
*/

#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	int iMult = 1, 
	register int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
     return iMult;
}	 
	
int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto int iRet = 0;
	
	printf("Enter base : \n");
	scanf("%d",&iValue1);
	
	printf("Enter power :\n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue2);
	
	printf("Result is : %d\n",iRet);
	
	return 0;
}	