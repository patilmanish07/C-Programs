#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size = 0;
  int *ptr = NULL;
  
  printf("Enter number of elements:");
  scanf("%d",&size);
  
  ptr = (int *)malloc(size*sizeof(int));           //Allocate the memory
   
   if(ptr ==NULL)
   {
      printf("unable to alloacte the memory\n");
    } 
	
    else
     {	
	   printf("memory allocate successfully\n");   
	 }  
	 
	 // step 2: Use the memory
	 
	 free(ptr);       //step 3:free the memory
	 
	 return 0;
 }	 