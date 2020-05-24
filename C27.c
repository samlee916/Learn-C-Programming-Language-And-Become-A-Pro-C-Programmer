#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
//A C example using the string functions: strcat and strcpy

int main() {

   char meat[100] = "Hey";
   //concatenates the string
   strcat(meat, " man!");
   printf("%s \n", meat);

   //replaces the string with another string
   strcpy(meat, "Hey girl!");
   printf("%s \n", meat);


    return 0;

}
