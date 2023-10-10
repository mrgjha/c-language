#include <stdio.h>

/**
 * Description - practice for Arrays 
 * returns 0 on success
 */

int main(void)
{
    int my_numbers[] = {0, 8, 1, 6, 1, 5, 8, 1, 2, 8, 1};
                     /* 0  1  2  3  4  5  6  7  8  9  10 */
    printf("The second digit of my mobile phone number is: %d\n", my_numbers[1]);



    /** An element in an array can be singled out and assigned a separate value.
    *   Elements within an array sit in a serial position
    *   The array above contain 11 elements sitting in serial positions 0 to 10.
    */

   /* isolating the element in position 1 and assigning a new value to it */
    my_numbers[1] = 200;        
    printf("The second digit of my mobile phone number is: %d\n", my_numbers[1]);



    /** An array with content size specification */
    int my_codes[20];
    my_codes[0] = 2022;

    printf("The 0 element of my array is: %d\n", my_codes[0]);



    /* strings are an array of character. Let's play with it. */
    char my_name[] = "Chris Nzoka-okoye";

    printf("My name is: %s\n", my_name);
    

    /* Getting an input of arrays */
    char user_name[20];
    int fav_number;

    printf("Enter a username: ");
    scanf("%s", user_name);
    printf("Your username is: %s\n", user_name); 
    /* notice there is no need for '&' when getting a string input */

    printf("Enter your favourite  number: ");
    scanf("%d", &fav_number);
    printf("Your number is: %d\n", fav_number);

    return (0);
}
