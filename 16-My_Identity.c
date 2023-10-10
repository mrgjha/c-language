#include <stdio.h>
/*This program displays a user initials and age upon input.*/

int main(void)
{
    char i,j,k;
    int age;
    
    printf("Enter your name starting with 3 initials and age: ");
    scanf("%c %c %c %d", &i, &j, &k, &age);
    printf("My initials are: %c%c%c. I am %d years old\n", i, j, k, age);
    return (0);
}
