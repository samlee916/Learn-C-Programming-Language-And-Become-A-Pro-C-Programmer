#include <stdio.h>
#include <stdlib.h>
//A C example about short hand else statements

int main() {

    char lastName[20];

    printf("Enter your last name: \n");
    scanf("%s", &lastName);

    //if last name contains an M, print blue, else print red
    (lastName[0] < 'M') ? printf("Blue") : printf("Red");

    int friends = 32;
    //if you have more than 1 friend print an s in "friend" and if not then no s in "friend"
    printf("\nI have %d friend%s.", friends, (friends != 1) ? "s" : "");

    return 0;

}
