#include <stdio.h>

/**
 * Write a program that keeps reading characters from
 * the standard input until the character q is entered.
 */

int main(void)
{
    char read_char;
    printf("Enter a character: ");
    while (read_char != 'q')
    {
        read_char = getchar();
    }
    printf("Busted!!! Out of the loop.\n");

    return (0);
}
