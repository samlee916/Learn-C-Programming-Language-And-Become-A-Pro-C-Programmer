#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of using random number generator

int main() {

    int i;
    int diceroll;

    for(i = 0; i < 20; i++) {
            //print out 20 random numbers from 1-6
            diceroll = (rand()%6) + 1;
            printf("%d\n", diceroll);

    }

    return 0;

}
