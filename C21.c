#include <stdio.h>
#include <stdlib.h>
//A C example about making tables

int main() {

    int c;
    int r;
    //a 5x5 table
    for(r = 1; r <= 5; r++) {

        for(c = 1; c <=5; c++) {

            printf("%d ", c);
        }

        printf("\n");

    }

    return 0;

}
