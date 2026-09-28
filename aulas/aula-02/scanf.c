#include <stdio.h>

int main() {
    int year;
    char yesorno;


    printf("What year were you born? ");
    scanf("%d", &year);

    printf("Have you more than 20 years? (y/n)");
    scanf(" %c", &yesorno);


    printf("The year is: %d\n", year);
    printf("Awnser: %c\n", yesorno );


     


}