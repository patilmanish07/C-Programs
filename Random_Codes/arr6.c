#include<stdio.h>

 int main()
 {
  
  int Arr[] = {10,20,30,40,50};
  
    printf("%d\n",Arr[0]);            //10
	printf("%d\n",Arr[4]);           //50
	printf("%d\n",Arr);              //100
	printf("%d\n",&Arr);             //100
	printf("%d\n",&(Arr[0]));        //100
	printf("%d\n",Arr +1);           //104
	printf("%d\n",(&Arr)+1);         //120
	printf("%d\n",sizeof(Arr));      //20
	printf("%d\n",sizeof(Arr[2]));    //4 byte
	printf("%d\n",Arr[2]);
	printf("%d\n",*(Arr+2));
	printf("%d\n",*(2+Arr));
	printf("%d\n",2[Arr]);
	
	return 0;
	
  }
	
	
	
	
	
	/*
	
	Arr[2];       30
	
	(100+2)     *(Arr +2)       30
	             *(108)      
					
	(2+100)		 *(2+ Arr)      30
	              *(108)        
				 
    30             2[Arr]	
   
    */   
				  