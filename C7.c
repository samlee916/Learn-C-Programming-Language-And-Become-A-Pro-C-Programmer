#include <stdio.h>
#include <stdlib.h>
//A C example of using the math functions

int main() {

    int weight = 110;
    //adding
    printf("If I eat a apple, I will weigh %d lbs.\n", weight+12);
    //to get the remainder
    printf("If I eat a apple, I will weigh %d lbs.\n", weight%12);
    //dividing
    int a = 32;
    int b = 22;
    printf("%d.\n", a/b);
    //diving floating numbers
    float c = 89.7;
    float d = 29.9;
    printf("%f.\n", c/d);
    //multiplying
    int e = 4;
    int f = 2;
    printf("%d.\n", e*f);
    //order of operations
    int g = 4 + 3 * 9;
    printf("Result is %d.\n", g);
    int h = (4 + 6) * 2;
    printf("Result is %d.h", h);

    return 0;

}
