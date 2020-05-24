#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of using pointers

int main() {

    int t = 19;

    printf("%p\n", &t);//prints the memory location of t

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", &t, "t", t);

    int * pt = &t;//holds the memory address
    printf("%p \t %s \t %d \n", pt, "t", t);

    printf("\n&pt: %d\n", *pt);//dereferencing the pointer t

    *pt = 71;
    printf("\n*pt: %d\n", *pt);

    return 0;

}
