
  #include<stdio.h>

    int i = 10;     // Global variable defination

    extern int j;   // variable declaration

    extern void fun();

    extern int no;

  int main()
{
   printf("Inside main\n");
   
   printf("The value of i is : %d\n" ,i);
   printf("The value of j is : %d\n" ,j);
   
   printf("The value of no is : %d" ,no);
   fun();
   
   return 0;
}