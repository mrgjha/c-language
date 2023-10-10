#include <stdio.h>
#include <math.h>

/**
 * Given an angle of 30 degrees,
 * write a program to calculate its sine and tangent values
 */

int main(void)
{
    double ang_degree = 30;
    double radian = ang_degree * (3.141593 / 180.0);

    printf("The sin value of angle 30 degrees = %f\n", sin(radian));
    printf("The tan value of angle 30 degrees = %f\n", tan(radian));

    return (0);
}
