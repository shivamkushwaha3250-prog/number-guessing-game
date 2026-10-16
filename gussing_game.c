#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
int main()
{
    printf("welcome to the world of guessing numbers\n");
    srand(time(NULL));
    int random = rand()%100+1;
    
    int guess, no_of_guesses=0;

    
    do
    {
        printf("please enter your guess ");
        scanf("%d", &guess);

        no_of_guesses++;
        if (guess < random)
        {
            printf("please guess a larger no : \n");
        }
        else if (guess > random)
        {
            printf("please guess a smaller no :\n");
        }
        else
            printf("conguratlation !!!! you got a right guessed in %d attemped",no_of_guesses);
    } while (guess != random);
   printf("\nthankyou for playing guessing no game");
   printf("\nthis game is devloped by 'shivam kushwaha' ");
    getch();
   return 0;
}


