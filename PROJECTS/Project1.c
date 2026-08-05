//PROJECT 1 : NUMBER GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));  //Initialize random number
    int random_number = rand() % 100 + 1;  //generates a random number from 1 to 100
    int guessed_number;
    int number_of_guesses = 0;


    do{
        printf("guess the number : ");
        scanf("%d",&guessed_number);

        if(guessed_number > random_number){
            printf("Lower number please!\n");
        }
        else if(guessed_number < random_number){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!\n");
        }
        number_of_guesses++;

    } while(guessed_number != random_number);
    printf("You guessed the number in %d guesses",number_of_guesses);

    return 0;
}