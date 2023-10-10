#include <stdio.h>
/* This program prints sizes of C data types on a machine*/

int main(void)
{
    char char_size;
    int int_size;
    double double_size;
    float float_size;

    printf("The size of character is: %lu.\n", (unsigned long)sizeof(char_size));
    printf("The size of integer is: %lu.\n", (unsigned long)sizeof(int_size));
    printf("The size of double is: %lu.\n", (unsigned long)sizeof(double_size));
    printf("The size of float is: %lu.\n", (unsigned long)sizeof(float_size));
    return (0);
}
