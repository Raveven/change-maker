#include <stdio.h>

int main() {
    float input, oginput;
    int intinput, cents, twenty, ten, five, one, quarter, dime, nickel, penny;

    printf("Please input a USD amount in this format 0.00: \n$");
    scanf("%f", &input);

    oginput = input;
    intinput = (int)input;
    cents = (int)((input - intinput) * 100 + 0.5);  

    twenty = intinput / 20;
    intinput = intinput - (twenty * 20);

    ten = intinput / 10;
    intinput = intinput - (ten * 10);

    five = intinput / 5;
    intinput = intinput - (five * 5);

    one = intinput / 1;

    quarter = cents / 25;
    cents = cents % 25;

    dime = cents / 10;
    cents = cents % 10;

    nickel = cents / 5;
    cents = cents % 5;

    penny = cents;

    printf("\nInput: $%0.2f\n", oginput);
    printf("$20 Dollar Bills: %d\n", twenty);
    printf("$10 Dollar Bills: %d\n", ten);
    printf("$5 Dollar Bills: %d\n", five);
    printf("$1 Dollar Bills: %d\n", one);
    printf("Quarters: %d\n", quarter);
    printf("Dimes: %d\n", dime);
    printf("Nickels: %d\n", nickel);
    printf("Pennies: %d\n", penny);

    return 0;
}