#include <stdio.h>

/* printing address of variables of different types to learn address in C */

int main(void)
{
    int num1;
    char name2;
    float num3;

    printf("Address of the variable num1 is: %p\n", &num1);
    printf("Address of the variable name2 is: %p\n", &name2);
    printf("Address of the variable num3 is: %p\n", &num3);

    return (0);
}
