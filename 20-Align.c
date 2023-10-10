#include <stdio.h>

/*
*   Program displays the two numbers 123 and 123.456
*   and align them at the left edge of the field.
*/

int main(void)
{
    int int_1;
    float Frac_1;
    int_1 = 123;
    Frac_1 = 123.456;

    printf("%-3d\n", int_1);
    printf("%-7.3f\n", Frac_1);
    return (0);
}
