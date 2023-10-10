#include <stdio.h>
/** print Fahrenheit-Celsius table for fahr = 0, 20, ... , 300
*   main = starting point
*   Return: 0 on success
*/

int main(void)
{
    int fahr, cels;
    printf("Fahrenheit\tCelcius\n");

    for ( fahr = 0; fahr <= 300; fahr += 20)
    /* incremented +20 */
    {
        cels = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, cels);
    }
    return (0);
}
