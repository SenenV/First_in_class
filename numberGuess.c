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
    printf("Enter (1) to start \n Enter(2) to change max number \n  Enter (3) to quit the game \n");    
    scanf("%d\n", &choice);

    return choice;

    }
    int playGame(int maxNum,int *guesses){  


    }

    int changeNum(maxNum){

    }
    int printScore(int totalGames, int guesses[]){

    }


int main(){
    srand(time(NULL));
    

    int maxNum = 10;
    int guess;
    

    While (1){
        choice = menuChoice();

        if(choice == 1){
            playGame(maxNum);
        }
        else if(choice == 2){
            maxNum = changeNum(maxNum);
        }
        else if(choice == 3) {
            printScore();
            break;
        }
        else{
            printf("Please select a option (1-3)")
        }
    }

    
    return 0;
    
}