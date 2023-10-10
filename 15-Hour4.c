#include <stdio.h>

/*
*   program that prints out the value of dbl_num
*   in both floating-point and scientific notation formats.
*
*   Return value = return (0)
*/

int main(void)
{
    double dbl_num = 123.456;
    printf("%f %2.2e\n", dbl_num, dbl_num);
    printf("The floating-point format of 123.456 is: %f\n", dbl_num);
    printf("The scientific notation format of 123.456 is: %e\n", dbl_num);
    return (0);
}
