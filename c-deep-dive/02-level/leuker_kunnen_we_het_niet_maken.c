#include <stdio.h>

int main() {
    float price;
    float tax;

    printf("> Enter the price of the product:\n");
    printf("$ ");
    scanf("%f", &price);

    tax = price * 21 / 121;

    printf("> The tax is %.6f\n", tax);

    return 0;
}