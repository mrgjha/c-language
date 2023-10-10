#include <stdio.h>

/**
 * Description -  
 * 
 */

double switch_calc(double x, double z)
{
    char operator;
    double result;

    printf("Enter the 1st number: ");
    scanf("%lf", &x);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter the 2nd number: ");
    scanf("%lf", &z);

    switch (operator)
    {
    case '+':
        printf("%6.2f\n", x + z);
        break;

    case '-':
        printf("%6.2f\n", x - z);
        break;

    case '*':
        printf("%6.2f\n", x * z);
        break;

    case '/':
        printf("%6.2f\n", x / z);
        break;

    default:
        printf("Invalid operator\n");
        break;
    }
}
