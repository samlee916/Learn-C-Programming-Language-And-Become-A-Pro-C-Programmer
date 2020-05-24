#include <stdio.h>
#include <stdlib.h>
//A C example about else if statements

int main() {

    float grade1;
    float grade2;
    float grade3;

    printf("Enter your 3 test grades: \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    float average = (grade1 + grade2 + grade3) / 3;
    printf("The average is %.2f. \n", average);

    if(average >= 90) {

        printf("Grade: A, great job");

    } else if((average <= 89) && (average >= 80)){

        printf("Grade: B, you can do better than a B");

    } else if((average >= 79) && (average >= 70)) {

        printf("Grade: C, you're average Joe");

    } else if((average >= 69) && (average >= 60)) {

        printf("Grade: D, man you need some serious tutoring");

    } else {

        printf("Grade: F, you failed miserably, please drop out of school");

    }

    return 0;

}
