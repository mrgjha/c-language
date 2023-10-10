#include <stdio.h>

/* A do-while loop guess game */

int main(void)
{
    const int correct_num = 13;
    int user_guess;
    int guessCount = 0;
    int countLimit = 3;

    printf("Can you guess the right number?\n");

    do {
        
        printf("Enter a number: ");
        scanf("%d", &user_guess);
        guessCount++;

    }while (user_guess != correct_num && guessCount < countLimit);

    if (user_guess != correct_num)
    {
        printf("You're out of guesses. Try again!!!\n");
    }
    else
    {
        printf("You're a genius!!!\n");
    }
    
    /* A do-while loop executes the code b4 checking the condition */
    return (0);
}
