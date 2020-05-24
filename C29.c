#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of rounding numbers

int main() {

    float a = 9.65657;
    float b = 4.3;

    printf("A is %.2f \n", floor(a));//floor() always round down
    printf("B is %.2f \n", floor(b));

    printf("A is %.2f \n", ceil(a));//ceil() always round up
    printf("B is %.2f \n", ceil(b));

    return 0;

}
