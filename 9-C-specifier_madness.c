/*minimum field width specifier*/
#include <stdio.h>

/*
*   Program outputs characters and numbers with respect the width-specifier
*   Program also takes into account; output alignment
*   and padding character spaces with 0.
*/

int main(void)
{
    printf("%5d %-5d\n", 13, 13); /*specifies 5 character widths aligning the later to left*/
    printf("%5d %-5d\n", 135, 135);
    printf("%5d %-5d\n", 1357, 1357);
    printf("%05d %05d %05d\n", 13, 135, 1357); /*unused character spaces are padded with 0*/
    return (0);
}
