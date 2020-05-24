#include <stdio.h>
#include <stdlib.h>
//A C example about or statements

int main() {

    char answer;

    printf("Do you like bagels? (Y/N)?: \n");
    scanf(" %c", &answer);

    if((answer == 'Y') || (answer == 'N')) {

        printf("Great me too!");

    } else{

        printf("Aww you suck.");

    }

    return 0;

}
