/** Using the cast operator
*   Cast operators can help to output a
*   datatype different from the one declared
*/
#include <stdio.h>
int main(void)
{
    int x, y;
    x = 7;
    y = 5;
    printf("Given x = %d, y = %d\n", x, y);
    printf("x / y produces: %d\n", x / y);
    printf("(float)x / y produces: %f\n", (float)x / y);
    return 0;
}