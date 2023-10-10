#include <stdio.h>

/**
 * main - program prints the result of the expressions as assigned
 *
 * Given;
 *  x = 1
 *  y = 3
 * followed by a new line
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
    int x, y;

    x = 1;
    y = 3;
    x += y;
    printf("The expression x += y yields: %d\n", x);

    x = 1;
    y = 3;
    x += -y;
    printf("The expression x += -y yields: %d\n", x);

    x = 1;
    y = 3;
    x -= y;
    printf("The expression x -= y yields: %d\n", x);

    x = 1;
    y = 3;
    x -= -y;
    printf("The expression x -= -y yields: %d\n", x);

    x = 1;
    y = 3;
    x *= y;
    printf("The expression x *= y yields: %d\n", x);

    x = 1;
    y = 3;
    x *= -y;
    printf("The expression x *= -y yields: %d\n", x);
    return (0);
}
