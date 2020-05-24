#include <stdio.h>
#include <stdlib.h>
//A C example of appending a file

int main() {

    FILE * fPointer;
    fPointer = fopen("C43.txt", "a");
    fprintf(fPointer, "\n- Written by Sam Lee");
    fclose(fPointer);
    return 0;

}
