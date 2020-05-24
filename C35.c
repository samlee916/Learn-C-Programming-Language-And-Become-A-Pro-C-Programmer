#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//A C example about using arrays and pointers
//This example loops through each element in the array and
//it prints out the value of it and also where it is stored in the memory address

int main() {

    int i;
    int meatBalls[5] = {7,9,43,21,3};

    printf("Element \t Address \t Value ");

    for(i=0; i<5; i++) {

        printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[1]);

    }
    //array names are just pointers to the first element
    printf("\nmeatBalls \t\t %p \n", meatBalls);
    //meatBalls is already an memory address

    //dereference it
    printf("\n*meatBalls \t\t %d \n", *meatBalls);
    //prints out 43 since it went up by 2 locations
    printf("\n*(meatBalls*2) \t\t %d \n", *(meatBalls+2);


return 0;

}
