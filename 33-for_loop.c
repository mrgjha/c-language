/* Using Multiple expressions in for loop */
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i=0, j=8; i<8; i++, j--)
    {
        printf("%d + %d = %d\n", i, j, i+j);
    }

    /* Another example of multiple expressions */


    int x, y;

    for (x=0, y=1; x<8; x++, y++)
    {
    printf("%d - %d = %d\n", y, x, y - x);
    }
    return 0;
}
