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
    char item[50];
    float price;

};

struct menuItems menu[] = {
    {"Salad", 9.95},
    {"Soup", 4.55},
    {"Sandwich", 13.25},
    {"Pizza", 22.35}
};

float total_bill(float tax, float tip, float price){
    float tax_perc = tax / 100;
    float tip_perc = tip / 100;
    

    return (price * tax_perc) + (price * tip_perc) + price;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int rand_num = rand() % 4;

    float price = menu[rand_num].price;
    float tax = atof(argv[1]);
    float tip = atof(argv[2]);

    float total = total_bill(tax, tip, price);

    printf("random item frm menu: %s, %.2f\n", menu[rand_num].item, menu[rand_num].price);
    printf("total is %.2f\n", total);

    

    
}