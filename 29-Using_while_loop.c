#include <stdio.h>

/**
* main - starting point
*
* Description - program prints character input
* while the character is not equal to 'x'
*
* Return 0 on success
*/

int main(void)
{
  int c;

  puts("Guess the correct character to exit the loop: ");
  while (c != 'K')
  {
    c = getc(stdin);
  }
  printf("\nOut of the while loop. Have a nice day!!!\n");
  return (0);
}
