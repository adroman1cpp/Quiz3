#include <stdio.h>
#include <stdlib.h>

int main() {

    //declare variables and arrays
    double tax;
    double tip;

    double price[4] = {9.95, 4.55, 13.25, 22.35};
    
    //create random to choose items
    int r = rand() % 4;
    double chosenPrice = price[r];
    char chosenItem = price[r];


    //ask the user for input
    printf("Enter tax percent: ");
    scanf("%lf", &tax);
    printf("Enter tip percent: ");
    scanf("%lf", &tip);

    //do the calculations and print
    printf("\nRestaurant Bill-\n");
    printf("Cost: $%.2lf\n", chosenPrice);
    printf("Tax: $%.2lf\n",(tax/100)*chosenPrice);
    printf("Tip: $%.2lf\n",(tip/100)*chosenPrice);

    double total = chosenPrice + (tax/100)*chosenPrice + (tip/100)*chosenPrice;
    printf("Total: %.2lf", total);
    return 0;
}