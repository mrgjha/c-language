#include <stdio.h>

/**
 * main -  start
 *
 * Description - refactoring a do-while loop to for loop
 *
 * returns 0 on success
 */

int main(void)
{
    int i;

    for (i = 65; i < 72; i++)
    {
        printf("Integer value of %c is: %d\n", i, i);
    }
    return (0);
}
