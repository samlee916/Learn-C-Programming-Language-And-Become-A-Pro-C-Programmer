#include <stdio.h>
#include <stdlib.h>
//A C example of type casting

int main() {

    float p;
    int u = 15;
    int s = 29;
    int d = 9;

    p = ((float)u * (float)s) / (float)d;
    printf("Average daily profit: $%.2f", p);


    return 0;

}
