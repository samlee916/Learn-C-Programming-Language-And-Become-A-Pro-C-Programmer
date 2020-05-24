#include <stdio.h>
#include <stdlib.h>
//A C example of reading from a file

int main() {

    FILE * fPointer;
    fPointer = fopen("C42.txt", "r");

    char words[150];

    //keeps looping until you reach the end of the file, C42.txt
    while(!feof(fPointer)) {

        fgets(words, 150, fPointer);
        puts(words);

    }

    fclose(fPointer);
    return 0;

}
