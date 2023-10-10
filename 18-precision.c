#include <stdio.h>

/*  Using precision specifiers
*
*   for integers, %3.6d means minimum of 3 field width
*   and max of 6.
*
*   for floats, %10.2f means 10 field width and maximum of 2 decimal places
 */

int main(void)
{
    int set_1 = 123;
    float set_2 = 123.456789;

    printf("Default integer format: %d\n", set_1);
    printf("With precision specifier: %3.6d\n", set_1);
    printf("Default float format: %f\n", set_2);
    printf("With precision specifier: %10.2f\n", set_2);
    return (0);
}