#include <stdio.h>
/* Practising If statement  */


int highest(int num1, int num2, int num3)
{
    if(num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int lower(int a1, int a2, int a3)
{
    if(a1 <= a2 || a1 <= a3)
    {
        return a1;
    }
    else
    {
        return a3;
    }
}


void main (void)
{
    printf("The biggest number is: %d\n", highest(5, 20, 7));
    printf("%d is not the highest number\n", lower(5, 20, 7));
}
