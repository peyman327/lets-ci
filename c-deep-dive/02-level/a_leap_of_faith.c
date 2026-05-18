#include <stdio.h>

int main() {
    int jaar;

    printf("Voer een jaartal in: ");
    scanf("%d", &jaar);

    if ((jaar % 4 == 0 && jaar % 100 != 0) || (jaar % 400 == 0)) {
        printf("%d is een schrikkeljaar.\n", jaar);
    } else {
        printf("%d is geen schrikkeljaar.\n", jaar);
    }

    return 0;
}

   
