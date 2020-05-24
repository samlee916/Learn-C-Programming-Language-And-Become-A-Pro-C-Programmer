#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//A C example about character functions

int main() {

    int t = 'e';
    int u = '0';
    //isalpha tells us if this letter is in the alphabet or a letter
    if(isalpha(t)) {

        printf("%c is a letter.", t);

    }else {
    //isdigit test if it is a number or equal to a number
        if(isdigit(t)) {

            printf("%c is a number.", u);

        }else {

            printf("%c is something.", u);

        }

    }

    return 0;

}
