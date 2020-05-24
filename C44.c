#include <stdio.h>
#include <stdlib.h>
//A C example about random access file

int main() {

    FILE * fPointer;
    //open file for writing and them reading
    fPointer = fopen("C44.txt", "w+");

    fputs("I ate fruits.", fPointer);
    fseek(fPointer, 6, SEEK_SET);
    //I ate cereal.
    fputs("cereal. ", fPointer);

    fseek(fPointer, -8, SEEK_END);
    //I ate apples.
    fputs("apples. ", fPointer);

    fclose(fPointer);
    return 0;

}
