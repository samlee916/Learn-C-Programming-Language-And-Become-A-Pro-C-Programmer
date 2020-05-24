#include <stdio.h>
#include <stdlib.h>
//A C example showing the function of scanf

int main() {

    char firstName[20];
    char crush[20];
    int numberOfBabies;
    //arrays have built in &
    printf("What is your name?\n");
    scanf("%s", firstName);

    printf("Who are you going to marry?\n");
    scanf("%s", crush);

    printf("How many kids will you have?\n");
    scanf("%d", &numberOfBabies);

    printf("%s and %s are in love and will %d babies.", firstName, crush, numberOfBabies);

    return 0;

}
