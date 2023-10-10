/*This program outputs the value of x and y*/
#include <stdio.h>

int integer_value(int x, int y)
{
  int sum;
  sum = x + y;
  return (sum);
}

int main(void)
{
  int C_sum;
  
  C_sum = integer_value(3, 6);
  printf("Sum is %d.\n", C_sum);
  return (0);
}
