#include <stdio.h>
/*Simplifying 7-C_program.c to better understand how it works*/
/* print Fahrenheit-Celsius table for fahr = 0, 20, ... , 300 */

main()
{
    int fahr, celcius; /*variable declaration*/
    
    /*Initializing variables*/
    fahr = 0;   
    celcius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celcius);

/*Above is the initial action to convert ^F to ^C*/
/*Let me try running another function below where I will manually alter the value of the fahr variable*/
/*This simply helps me understand the huge time the while loop saves*/

    /*Initializing variables*/
    fahr = 20;   
    celcius = 5 * (fahr - 32) / 9;

    printf("%d\t%d\n", fahr, celcius);
}

/*I wonder how people lived when there were no programming languages*/