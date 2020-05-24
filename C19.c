#include <stdio.h>
#include <stdlib.h>
//A C example about the do while loops

int main() {

    float grade = 0;
    float scoreEntered = 0;
    float numberOfTests = 0;
    float average = 0;

    printf("Press 0 when complete. \n");

    do {

        printf("Tests: %.0f Average: %.2f\n", numberOfTests, average);
        printf("Enter test scores: " );
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        numberOfTests++;
        average = grade/numberOfTests;
    }while(scoreEntered != 0);


    return 0;

}
