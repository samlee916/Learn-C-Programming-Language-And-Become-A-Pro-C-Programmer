#include <stdio.h>
#include <stdlib.h>
//A C example about using strings and pointers

int main() {

    char movie1[] = "The Return of Superman!";
    char *movie2 = "The Reign of Superman!";

    //puts prints out the string regardless
    puts(movie2);

    movie2 = "The Death of Superman!";
    puts(movie2);

    return 0;

}
