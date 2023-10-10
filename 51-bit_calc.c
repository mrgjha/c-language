#include <stdio.h>

/**
 * @x - 1st number
 * @z - 2nd number
 *
 * Description - function performs bitwise calculation
 * using the binary bitwise operators
 *
 * Return: result on success
 */

int bit_calc(int x, int z)
{
    char operator;
    int result;

    printf("Enter the 1st number: ");
    scanf("%d", &x);

    printf("Enter a bitwise operator: ");
    scanf(" %c", &operator);

    printf("Enter the 2nd number: ");
    scanf("%d", &z);

    switch (operator)
    {
    case '&':
        result = x & z;
        break;

    case '|':
        result = x - z;
        break;

    case '^':
        result = x * z;
        break;

    default:
        printf("Invalid operator\n");
        break;
    }

    return result;
}
