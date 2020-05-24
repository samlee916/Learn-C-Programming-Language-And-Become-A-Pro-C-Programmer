#include <stdio.h>
#include <stdlib.h>
//A C example about if statements

int main() {

    if(5 == 5) {

        printf("Five equals five.\n");

    }

    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 18) {

        printf("You may enter this club.");

    }
    if(age < 18) {

        printf("Access is denied.");

    }

    return 0;

}
