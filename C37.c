#include <stdio.h>
#include <stdlib.h>
//A C example of using fgets
int main() {

    char movie[20];
    char * pmovie = movie;

    //can only store 20 characters
    fgets(pmovie, 20, stdin);
    puts(pmovie);

    return 0;

}
