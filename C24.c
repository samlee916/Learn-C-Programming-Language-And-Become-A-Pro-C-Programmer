#include <stdio.h>
#include <stdlib.h>
//A C example about the switch statement

int main() {

    char grade = 'C';

    switch(grade) {

    case 'A' :
        printf("Excellent.\n");
        break;
    case 'B' :
        printf("Good.\n");
        break;
    case 'C' :
        printf("Satisfactory.\n");
        break;
    case 'D' :
        printf("Bad.\n");
        break;
    case 'F' :
        printf("Failure.\n");
        break;
    default :
        printf("What???\n");

    }

    return 0;

}
