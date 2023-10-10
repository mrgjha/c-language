#include <stdio.h>

/*  Program prints the ASCII value of characters
*   the character equivalent of numbers in a char data type
*   the integer value of character variables
*/

int main(void)
{
    char a1, a2, b1, b2;
    int c1, c2;

    a1 = 'C';
    a2 = 'f';
    b1 = 72;
    b2 = 88;
    c1 = 'A';
    c2 = 254;

    printf("The ASCII value of letter C is: %d\n", a1);
    printf("The ASCII value of letter f is: %d\n", a2);
    printf("The character equivalent of 72 is: %c\n", b1);
    printf("The character equivalent of 88 is: %c\n", b2);
    printf("The character constant A is: %d\n", c1);
    return (0);
}
