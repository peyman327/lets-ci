#include <stdio.h>

int main() {
    int i = 1;
    double getal, som = 0.0, gemiddelde;

    printf("Voer 10 getallen in:\n");

          
    while (i <= 10) {
        printf("Getal %d: ", i);
        scanf("%lf", &getal);
        som += getal; 
        i++;
    }

    gemiddelde = som / 10.0;

    printf("\nDe som is: %.2f\n", som);
    printf("Het gemiddelde is: %.2f\n", gemiddelde);

    return 0;
}
     