#include <stdio.h>

/**
 * @a - 1st number
 * @b - 2nd number
 *
 * Description - function performs basic calculation
 *
 * returns a double on success
 */

double calc(double a, double b)
{
    char operator;
    double result;

    printf("Enter the 1st number: ");
    scanf("%lf", &a);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter the 2nd number: ");
    scanf("%lf", &b);

    if (operator == '+')
    {
        result = a + b;
    }
    else if (operator == '-')
    {
        result = a - b;
    }
    else if (operator == '*')
    {
        result = a * b;  
    }
    else if (operator == '/')
    {
        result = a / b;
    }
    else
    {
        result = printf("Invalid\n");
    }

    return result;
}