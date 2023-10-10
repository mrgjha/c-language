#include <stdio.h>

/*
*   main:   Entry point   
*
*   Description: Write a program that uses getchar() and putchar()
*   to read in a character entered by the user and
*   write the character to the screen.
*
*   Return: 0. 
*/

int main(void)
{
    printf("Kindly enter a charater: ");
    char a1 = getchar();
    putchar(a1);
    return (0);
}