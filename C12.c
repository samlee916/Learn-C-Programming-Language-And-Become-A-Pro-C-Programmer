#include <stdio.h>
#include <stdlib.h>

//A C example about nesting if statements
int main() {

    int age;
    char gender;

    printf("How old are you? \n");
    scanf("%d", &age);

    printf("What is your gender: \n");
    scanf(" %c", &gender);

    if(age >= 18) {

        printf("You may enter this club.");

        if(gender == "Male") {

            printf("Dude.");

        }

        if(gender == "Female") {

            printf("Lady.");

        }
    }

    if(age < 18) {

        printf("You are not allowed.");

    }

    return 0;

}
