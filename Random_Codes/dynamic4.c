 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
  {
    int size = 0;
	void *ptr = NULL;
	
	printf("Enter the number of elemnts:  ");
	scanf("%d\n",&size);
	
	ptr = void* realloc(void* old_Address ,int New_size);    //step1= Allocate the memory
	
	if(ptr == NULL)
	{
	  printf("Unable to allocate memory\n");
	} 
	 else
	 {
	   printf("Memory allocated successfully\n");
	  }

    // step2: Use the memory

    free(ptr);      //free the memory
  
    return 0;
  }