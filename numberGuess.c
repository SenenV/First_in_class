/*
Description:
A game in which the user has to guess a number from 1-10

Outline:
include stdio.h, time.h, stdlib.h
create the random num generator (1-10)
show menu
    start game
    change num
    quit
create loop until user decides to quit





*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int menuChoice(){
    int choice;
    printf("Welcome to Number Guessing Game!\n");
    printf("Enter (1) to start \n");
    printf("Enter (2) to change max number \n");
    printf("Enter (3) to quit \n");   
    scanf("%d\n", &choice);

    return choice;

    }

void playGame(int maxNum,int *guesses){
    int target = rand() % 10 + 1;
    char input[10];
    *guesses = 0;

    while(1){
        printf("Your guess: ");
        scanf("%s", input);

        if(input[0] == 'q'){
        *guesses = -1;
        printf("You have quit the game!\n");
        break;
        }

        int guess = atoi(input);
        (*guesses)++;
        if(guess == target){
            printf("YOU WON!!!\n");
            break;
            }

        if(guess > target){
            printf("Lower!\n");
            }
        else if(guess < target){
            printf("Higher!\n");
            }


        }   
    }

int changeNum(int currentMax) {
    int newMax;
    printf("Enter new max number (positive): ");
    scanf("%d", &newMax);
    if (newMax > 0) return newMax;
    printf("Invalid, keeping old max.\n");
    return currentMax;
}





int main(){
    srand(time(NULL));
    

    int maxNum = 10;
    int guesses[50];
    int totalGames = 0;
    

    while (1){
        int choice = menuChoice();

        if(choice == 1){
            playGame(maxNum, &guesses[totalGames]);
            totalGames++;
        }
        else if( choice == 2){
            maxNum == changeNum(maxNum);
        }
        else{
            printf("Please select a option (1-3)");
        }
    }

    
    return 0;
    
}