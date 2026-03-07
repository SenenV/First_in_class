/*  
    Description: 

    Program will be able to calculate the total of a restaurant bill.
    


    Outline:

    1. include stdio.h & stdlib.h.

    2. struct that will contain the meals & prices.

    3. randomly choose the meal.

    4. get tips & taxes from command line.

    5. function that calculates the tax & tips.
    
    6. display the total bill.


*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct menuItems{
    char rand_meal[50];
    float price;

};

struct menuItems menu[] = {
    {"Salad", 9.95},
    {"Soup", 4.55},
    {"Sandwich", 13.25},
    {"Pizza", 22.35}
};

int main(){
    srand(time(NULL));
    int rand_num = rand() % 4;

    
}