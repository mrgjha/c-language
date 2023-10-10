#include <stdio.h>

/* A while loop version of the guess game */

int main(void)
{
    int correct_num;
    int user_guess;
    int guessCount = 0;
    int countLimit = 3;

    printf("Can you guess the right number?\n");

    /*
    do {
        printf("Enter a number: ");
        scanf("%d", &user_guess);
        guessCount++
    }while (user_guess != correct_num && guessCount < countLimit);
    */

    /*
    while (user_guess != correct_num && guessCount < countLimit)
    {
        printf("Enter a number: ");
        scanf("%d", &user_guess);
        guessCount++;
    }

    if (user_guess != correct_num && guessCount == countLimit)
    {
        printf("You're out of guesses. Try again!!!\n");
    }
    else
    {
        printf("You're a genius!!!\n");
    }
    */

    for (correct_num = 13; user_guess != correct_num && guessCount < countLimit; guessCount++)
    {
        printf("Enter a number: ");
        scanf("%d", &user_guess);
    }

    if (user_guess != correct_num && guessCount == countLimit)
    {
        printf("You're out of guesses. Try again!!!\n");
    }
    else
    {
        printf("You're a genius!!!\n");
    }

    /** A for loop is similar to while loop. 
     * It checks the condition b4 executing the code
    */
    
    return (0);
}
