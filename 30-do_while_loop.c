#include <stdio.h>

/**
 * Description - Print the numeric value of letters A to J
 * an enters a new line
 */

int main(void)
{
   int tdb; 
   
   tdb = 'A';
   do
   {
       printf("The ASCII value of %c is: %d\n", tdb, tdb);
       tdb++;
   } while (tdb <= 'J');
   return (0);
}
