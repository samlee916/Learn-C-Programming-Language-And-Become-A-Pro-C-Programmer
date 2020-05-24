#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
//A C example using puts and gets

int main() {

    char catsName[50];
    char catsFood[25];
    char sentence[75] = "";

    puts("What is the cat's name? ");//asks the user's input
    gets(catsName);//acts as a scanf and takes in user's input

    puts("What is the cat's food? ");
    gets(catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);
    strcat(sentence, ".");

    puts(sentence);

    return 0;

}
