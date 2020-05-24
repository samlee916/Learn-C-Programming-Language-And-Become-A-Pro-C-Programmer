#include <stdio.h>
#include <stdlib.h>
//A C example about the while loops

int main() {

    int d = 1;
    while(d < 5) {
        //prints out d four times
        printf("D is %d.\n", d);
        d++;

    }

    int r = 1;
    float a = .01;
    while(r <= 31) {

        printf("Day: %d Amount: %4.2f\n", r, a);
        a *= 2;
        r++;

    }


    return 0;

}
