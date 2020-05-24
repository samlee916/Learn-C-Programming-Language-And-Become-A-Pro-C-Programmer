#include <stdio.h>
#include <stdlib.h>
//A C example about passing arguments to functions

void convertToDollars(float euro);

int main() {
    //passing money into the function
    int money = 1.00;
    convertToDollars(money);

    return 0;

}

void convertToDollars(float euro) {

    float usd = euro * 1.37;
    printf("%.2f Euros - %.2f USD\n", euro, usd);
    return;

}
