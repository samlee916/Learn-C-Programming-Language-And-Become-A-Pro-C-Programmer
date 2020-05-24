#include <stdio.h>
#include <stdlib.h>
//A C example about return value

int calculateBonus(int yearsWorked);

int main() {

    int samBonus = calculateBonus(25);

    printf("Sam gets a $%d \n", samBonus);

    return 0;

}

int calculateBonus(int yearsWorked) {

    int bonus = yearsWorked * 250;
    if(yearsWorked > 10) {

        bonus += 1000;

    }
    //returns the value to the variable samBonus
    return bonus;

}

