// write a recursive program which display below pattern.
// Output:- a b c g e f

#include<stdio.h>

void Display()
{
	static char ch = 'a';          
	
	if(ch <= 'f')           
	{
		printf("%c\t",ch);
		ch++;
		Display();          
	}
}


int main()
{
	Display();
	
	return 0;
}