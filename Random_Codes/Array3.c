#include<stdio.h>

int main()
{
    // Arr is one dimensional array which 
	//contains 4 elements and each element 
	// is of type integer.
	 Arr[4];
	 
	 Arr[0] = 10;
	 Arr[1] = 20;
     Arr[2] = 30;
     Arr[3] = 40;

    // Brr is two dimensional array 
	// which contains three one dimensional array
	// each one dimensional array contains 4 elements 
	// and each element is of type integer.
	int Brr[3][4];
	
	Brr[0][0] = 10;
	Brr[0][1] = 11;
	Brr[0][2] = 12;
	Brr[0][3] = 13;
	Brr[2][1] = 101;
	
    return 0;
 }
 
 
 
 // Arr is 2 dimensional array which contains
 // 5 one dimensional array each one dimensional array 
 // contains 3 elements
 // each elements is of type double
 
 double Arr[5][3];
 
 
 int no = 11;
 
 // p is pointer which holds the address of integer
// currently it holds the address of no

// where no is variable of type integer initialised with 
//with the value 11

int *p = &no;



  // no      11
  // &no     100
  // p       100
  // &p      200
  //*p       11
  // sizeof(no)  4
  // sizeof(p)   8
  // sizeof(*p)  4...(integer)
  