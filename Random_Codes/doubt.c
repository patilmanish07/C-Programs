#include<stdio.h>
int main()
{
  double d =3.10;
  
  printf("%d\n",sizeof(d));
  printf("%d\n",sizeof(3.10));
  
  printf("%d\n",sizeof(3.10f));
  
  int Arr[3] ={21,43,54};
  int X = 0;

  X = Arr[2] + 21 + Arr[0];

  X++;                          //97

    printf("%d\n",X);
  
  return 0;
 }