#include <stdio.h>
#include <stdlib.h>
//A C example about the break keyword

int main() {

    int a;
    int howmany;
    int maxAmount = 10;

    printf("How many times do you want this loop to loop (up to 10)?: ");
    scanf("%d", &howmany);

    for(a = 1; a <= maxAmount; a++) {

        printf("%d\n", a);

        if(a == howmany) {

            break;//ends the loop

        }

    }

    return 0;

}
