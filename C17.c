#include <stdio.h>
#include <stdlib.h>
//A C example about increment operator

int main() {

    int t = 23;
    printf("%d\n", t);
    t++;
    //t increments by 1
    printf("%d\n", t);
    t--;
    //t decrements by 1
    printf("%d\n", t);

    int a = 5, b = 10, answer = 0;
    //++... adds 1 to a before it runs
    answer = ++a * b;
    printf("Answer: %d.\n", answer);

    a = 5, b = 10, answer = 0;
    answer = a++ * b;
    printf("Answer: %d.\n", answer);

    return 0;

}
