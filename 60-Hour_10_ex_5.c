/* Add the sum of numbers from 0 to 20 while skipping the numbers 8, 12 and 16 */
#include <stdio.h>

int main(void)
{
    int num;
    int sum;

    for ( num = 0; num <= 20; num++)
    {
        if ((num == 8) || (num == 12) || (num ==16))
        continue;
        sum += num;
    }
    printf("The sum is: %d\n", sum);
    
    return (0);
}
