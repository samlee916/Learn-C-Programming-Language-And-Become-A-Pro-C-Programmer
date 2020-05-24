#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
//A C example about more character functions using isupper
//to show if a letter is uppercase or lowercase

int main() {

    int tuna = 'f';

    if(isupper(tuna)) {

        printf("%c is an uppercase letter.", tuna);

    } else {

        printf("%c is a lowercase letter.", tuna);

    }

    return 0;

}
