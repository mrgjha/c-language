#include <stdio.h>

/**
 * Given the following statements,
int x;
unsigned int y;
x = 0xAB78;
y = 0xAB78;
write a program to display the decimal values of x and y on the screen.
 */

int main(void)
{
    int x;
    unsigned int y;

    x = 0xAB78;
    y = 0xAB78;

    printf("The Decimal value of 0xAB78 is: %d\n", x);
    printf("The Decimal value of 0xAB78 is: %u\n", y);

    return (0);
}
