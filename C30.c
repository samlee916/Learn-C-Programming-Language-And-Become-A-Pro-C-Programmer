#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example of using absolute value and other math functions

int main() {

    int year1;
    int year2;
    int age;

    printf("Enter a year: \n");
    scanf(" %d", &year1);

    printf("Enter another year: \n");
    scanf(" %d", &year2);

    age = year1 - year2;
    printf("%d \n", age);
    age = abs(age);//stores the absolute value of age into age
    printf("My age is %d.\n", age);

    printf("%f \n", pow(5,2));//5^2
    printf("%f \n", sqrt(64));//8


    return 0;

}
