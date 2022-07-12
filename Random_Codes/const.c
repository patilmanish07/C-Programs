#include<stdio.h>

    int main()
{
	// no1 is a variable of type integer 
	// initialised with 10
	int No1 = 10;
	
    // no2 is a variable of type integer 
	// initialised with 10
    const int No2 = 10;
	
	// Arr is one dimensional array which 
	// contains 4 elements each element is of type integer
	 int Arr[4] = {10,20,30,40};
	 
	// Brr is one dimensional array which 
    // contains 4 elements each element is of type integer constant
      const int Brr[4] = {10,20,30,40}; 	
 
     No1++;
	 
	 // No2++;
	 
	 Arr[0] = 11;
	 
	 // Brr[0] = 11;

     return 0;
}