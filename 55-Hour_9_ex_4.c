#include <stdio.h>

/**
 * Write a program to display negative integers in
 * hex format along with their signed int equivalents
 */

int main(void)
{
    int x, y;

    x = -244;
    y = -309;

    printf("The hex equivalent of x and y are: 0X%4X \t 0x%4X\n", x, y);
    printf("The hex equivalent of x and y are: %4d \t %4d\n", x, y);

    return (0);
}
