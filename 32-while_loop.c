#include <stdio.h>

/**
 * main - start 
 * 
 * Description - print hex equivalent of range of decimal numbers
 * using while loop
 * 
 * return value (0) == success
 */

int main(void)
{
    int dec_hex;

    dec_hex = 9;
    while(dec_hex <= 20)
    {
        printf("Hex value of %d is: %X\n", dec_hex, dec_hex);
        dec_hex++;
    }
    return (0);
}
