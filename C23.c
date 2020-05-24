#include <stdio.h>
#include <stdlib.h>
//A C example about the continue keyword

int main() {

    int num = 1;

    do {

        if(num == 6 || num == 8) {
            //skips 6 and 8 because no print statement
            num++;
            continue;//goes back to the top

        }

        printf("%d is available\n", num);
        num++;

    }while(num <= 10);

    return 0;

}
