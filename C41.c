#include <stdio.h>
#include <stdlib.h>
#include "C40.h"
//A C example of writing a file

int main() {

    FILE * fPointer;
    //opening and creating the file
    fPointer = fopen("C41.txt", "w");
    //writing to the file
    fprintf(fPointer, "I love programming in C!\n");
    fclose(fPointer);



    return 0;


}
