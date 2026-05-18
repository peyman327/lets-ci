#include <stdio.h>

int main() {
    int i;
    double getal, som = 0.0, gemiddelde;

    printf("Voer 10 getallen in:\n");

   
    for(i = 1; i <= 10; ++i) {
        printf("Getal %d: ", i);
        scanf("%lf", &getal);
        som += getal; 
    }

    
    gemiddelde = som / 10.0;

   
    printf("\nDe som is: %.2f\n", som);
    printf("Het gemiddelde is: %.2f\n", gemiddelde);

    return 0;
}
  