#include <stdio.h>
#include <stdlib.h>
//A C example about string terminators and arrays

int main() {

    char name[6] = "Sam";
    printf("My name is %s.\n", name);
    //change m to t
    name[2] = 't';
    printf("My name is %s.\n", name);
    //another way to represent arrays
    char food[] = "fish";
    printf("The best food is %s.\n", food);
    //replacing fish with pie
    strcpy(food, "pie");
    printf("The best food is %s.\n", food);

    return 0;

}
