// Function used to demonstrate the Auto storage class concept.

 #include<stdio.h>

    void Demo()
 {
    auto int A = 10;
    
	A++;
    
	printf("%d\n",A);
  }
  
     int main()
  {
     Demo();

     Demo();	
  
     return 0;
	} 