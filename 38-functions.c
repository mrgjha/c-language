#include <stdio.h>

/**
 * main - starting point 
 * 
 *  Description - practice file to learn functions and function call.
 * 
 *  returns 0 on success 
 */

int add(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int rm(int x, int y)
{
    int minus;
    minus = x - y;

    return minus;
}

int main(void)
{
    int add_part;
    int sub_part;
    int total;

    add_part = add(4, 2);
    sub_part = rm(5, 3);

    total = add_part * sub_part;
    printf("The result is: %d\n", total);

    return 0;
}
