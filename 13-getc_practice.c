#include <stdio.h>

/*
*   getc(stdin) vs getchar()
*   program reads character entered by the user
*   and prints it to the screen
*/

int main(void)
{
    printf("Enter 2 character from the keyboard: ");
    char a1 = getc(stdin);
    char a2 = getchar();
    printf("The characters you entered are: %c%c\n.", a1, a2);
    return (0);
}
