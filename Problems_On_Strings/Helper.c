
//    To Compile :- gcc Main.c Helper.c -o Myexe
//    To Run     :- Myexe(windows)

/////////////////////////////////////////////////////////////////////
//
//   Function name :-  Strlwrx(String in lowercase)
//   Input         :-   MARVELLOUS MULTI OS.
//   Output        :-   marvellous multi os. 
//   Description   :-   We convert string uppercase to lowercase.    
//   Author        :-   Manish Bhupendra Patil 
//   Date          :-   1/07/2022
//
/////////////////////////////////////////////////////////////////////

#include"Header.h" 

void strlwrx(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}

}
