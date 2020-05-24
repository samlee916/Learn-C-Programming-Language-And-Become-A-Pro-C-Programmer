#include <stdio.h>
#include <stdlib.h>
//A C example of conversion characters

int main() {

    //%s is for strings and text
    printf("%s is the best %s ever.\n", "Sam", "programmer");
    //%d is for numbers
    printf("I ate %d hot dogs yesterday.\n", 9);
    //%f is for floating point numbers
    printf("Pi is %f.\n", 3.1415926535);
    //to print the number to two decimal places we use %.2f
    printf("Pi is %.2f.\n", 3.1415926535);

    return 0;

}
