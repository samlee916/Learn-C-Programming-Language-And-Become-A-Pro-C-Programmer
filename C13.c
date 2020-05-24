#include <stdio.h>
#include <stdlib.h>

//A C example about if else statements
int main() {

    int age;
    char gender;

    printf("How old are you? \n");
    scanf("%d", &age);

    if(age >= 18) {

        printf("You may enter this club.");

        printf("What is your gender: \n");
        scanf(" %c", &gender);

        if(gender == "Male") {

            printf("Dude.");

        }else {

            printf("Lady.");

        }
    }else {

        printf("You are not allowed.");

    }

    return 0;

}
