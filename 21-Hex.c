#include <stdio.h>

/*
*   Given three integers, 15 , 150 , and 1500 , 
*   the program prints the integers on the screen in the hex format.
*/

int main(void)
{
    int a1, b2, c3;
    a1 = 15;
    b2 = 150;
    c3 = 1500;

    printf("The hex equivalent of 15 is: %X\n", a1);
    printf("The hex equivalent of 150 is: %X\n", b2);
    printf("The hex equivalent of 1500 is: %X\n", c3);
    return (0);
}