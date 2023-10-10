#include <stdio.h>

/**
 * Description - prints hex numbers from 9 - 20
 *
 * Returns 0 on success
 */

int main(void)
{
    int hex;

    puts("Decimal \t Hex value");
    for (hex = 9; hex <= 20; hex++)
    {
    printf("%d \t %X\n", hex, hex);
    }
    puts("Uppercase Hex values");
    return (0);
}
