/*This C program nultiplies 2 integers and prints the output*/
#include <stdio.h>

int multiply_integers(int x, int y)
{
  int prod;

  prod = x*y;
  return (prod);
}

int main(void)
{
  int prod_1;
  
  prod_1 = multiply_integers(50, 65);
  printf("The product of 50 by 65 is %d.\n", prod_1);
  return (0);
}
