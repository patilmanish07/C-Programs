//////////////////////////////////////////////////////////////////
//
//    Accept string from user and convert it into lowercase.
//    
//
//////////////////////////////////////////////////////////////////    


#include "Header.h"        // Our created header file. 

//Entry point Function.
int main()
{
	char arr[20];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",arr);
	
	strlwrx(arr);           //Function call
	
	printf("Modified string is %s",arr);
	
	return 0;
}