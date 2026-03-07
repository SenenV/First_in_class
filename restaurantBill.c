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
    float tax_p = tax / 100;
    float tip_p = tip / 100;
    return (price * tax_p) + (price * tip_p) + price;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int rand_num = rand() % 4;

    float price = menu[rand_num].price;
    float tax = 0;
    float tip = 0;

    scanf("%f %f", &tax, &tip);

    float total = total_bill(tax, tip, price);



    printf("Menu Item: %s\n", menu[rand_num].item);
    printf("Price: $%.2f\n", menu[rand_num].price);
    printf("Tax:   %d%%\n", (int)tax);
    printf("Tip:   %d%%\n", (int)tip);
    printf("Total: $%.2f\n", total);

    fprintf(stderr, "Tip: %d%%\n", (int)tip);
    

    
}