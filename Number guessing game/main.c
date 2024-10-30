#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r, n, guess = 0;
    srand(time(0));
    int min = 1;
    int max = 100;
    n = (rand() % (max - min + 1) + min); // storing random number in n
    // printf("%d", n);
    printf("Guess the number(between 1 to 100): ");
    scanf("%d", &r);
    do // loop to check guessed number
    {
        guess++;
        if (r > n)
        {
            printf("Guessed number is greater then the generated number\n");
            printf("Guess the number again: ");
            scanf("%d", &r);
        }
        else if (r < n)
        {
            printf("Guessed number is smaller then the generated number\n");
            printf("Guess the number again: ");
            scanf("%d", &r);
        }
        else
        {
            printf("You gussed the number the right!!");
        }

    } while (n != r);

    printf("You took %d guesses", guess);

    return 0;
}