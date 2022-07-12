#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int ans = 0;
	printf("Name of executable is : %s\n",argv[0]);
	
	printf("Number of command line argumenrs are :%d\n",argc);
	
	
	 ans = atoi(argv[1]) + atoi(argv[2]);
	 printf("Addition is : %d\n",ans);
	
	return 0;
}
	
//Commands : gcc Command.c -o Myexe for (compilation).
//		      Myexe 10 11 for (Execution).
		  
//argv:- Arguments's vector(Array).
//argc:- Arguments's count.
//atoi:- Ascii to integer.	  