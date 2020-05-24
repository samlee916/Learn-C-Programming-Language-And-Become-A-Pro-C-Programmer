#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of using ints and floats

int main() {

    int i;
    int meatBalls[5];
    int totalBalls = 0;

    for(i = 0; i < 5; i++) {

        printf("How many meatballs did you eat on day %d? \n", i+1);
        scanf(" %d", &meatBalls[i]);

    }

    for(i = 0; i < 5; i++) {

        totalBalls += meatBalls[i];

    }

    int avg = totalBalls / 5;
    printf("\nYou ate %d meatballs total, that is an average of %d per day. \n", totalBalls, avg);

    return 0;

}
