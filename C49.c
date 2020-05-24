#include <stdio.h>
#include <stdlib.h>
//A C example about pass by value vs. pass by reference

void passByValue(int i);
void passByReference(int *i);

int main() {

    int t = 20;
    //pass the value of 20 and not the variable
    passByValue(t);
    //prints 20 instead of 99
    printf("Passing By Value: %d.\n", t);

    //passes the memory address value
    passByReference(&t);
    printf("Passing By Reference: %d.\n", t);

    return 0;

}

//pass by value function
void passByValue(int i) {

    i = 99;
    return;

}

//pass by reference function
void passByReference(int *i) {

    *i = 64;
    return;

}
