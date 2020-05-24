#include <stdio.h>
#include <stdlib.h>
//A C example of heaps, mallac, and free

int main() {

    int * points;
    //getting extra memory
    points = (int *) malloc(5*sizeof(int));
    //giving it back
    free(points);

    return 0;

}
