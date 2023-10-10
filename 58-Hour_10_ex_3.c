#include <stdio.h>

/**
 *  Write a program to read characters from the standard I/O.
 *  If the characters are A, B, and C, display their numeric values on the screen. 
 *  (The switch statement is required.)
 * 
 */

int main(void)
{
    char char_read;

    printf("Enter a character: ");
    char_read = getc(stdin);

    switch (char_read)
    {
    case 'A':
        printf("The numeric value of A is: %d\n", char_read);
        break;
    case 'B':
        printf("The numeric value of B is: %d\n", char_read);
        break;
    case 'C':
        printf("The numeric value of C is: %d\n", char_read);
        break;
    default:
        printf("The character you entered is: %c\n", char_read);
        break;
    }
    return (0);
}
