#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What do you like to buy?:");
    fgets(item, sizeof(item), stdin);

    printf("What is the price?:");
    scanf("%f", &price);

    printf("How many?:");
    scanf("%d", &quantity); 

    total = price * quantity;

    printf("%c%.2f", currency, total);






    return 0;
}