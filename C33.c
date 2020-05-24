#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of using sorting arrays

int main() {

    int i, temp, swapped;
    int howmany = 10;
    int goals[howmany];

    for(i=0; i<howmany; i++) {

        goals[i] = (rand()%25 + 1);

    }

    printf("Original List: \n");
    for(i=0; i<howmany; i++) {

        printf("%d \n", goals[i]);

    }

    while(1) { //1 is true

        swapped = 0;

        for(i=0; i<howmany-1; i++) {

            if(goals[i] > goals[i+1]) {
                //swapping numbers
                int temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapped = i;

            }
        }

        if( swapped == 0) {

            break;

        }

        }

    printf("Sorted List List: \n");
    for(i=0; i<howmany; i++) {

        printf("%d \n", goals[i]);

    }



    return 0;

}
