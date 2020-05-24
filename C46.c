#include <stdio.h>
#include <stdlib.h>
//A C example about global and local variables

//any function can use this global variable
int num = 8;

int main() {

    //only this function can use this local variable
    int num1 = 8;

    //the value on num2 is 16
    int num2 = num + num1;
    printf("The value of num2 is %d.", num2);


    return 0;

}
