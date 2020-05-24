#include <stdio.h>
#include <stdlib.h>
#include "C40.h"
//A C example of using structures

int main() {

    struct user tom;
    struct user john;

    tom.userID = 1;
    john.userID = 2;

    puts("Enter the first name of user 1: ");
    gets(tom.firstName);

    puts("Enter the first name of user 2: ");
    gets(john.firstName);

    printf("User 1 ID is %d\n", tom.userID);
    printf("User 1 First Name is %s\n", john.firstName);

    return 0;

}
