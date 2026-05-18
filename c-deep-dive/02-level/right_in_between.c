#include <stdio.h>

int main() {
    float getal1, getal2, gemiddelde;

    // Vraag om de invoer van de gebruiker
    printf("Voer het eerste getal in: ");
    scanf("%f", &getal1);

    printf("Voer het tweede getal in: ");
    scanf("%f", &getal2);

    // Bereken het gemiddelde
    gemiddelde = (getal1 + getal2) / 2.0;

    // Toon het resultaat met 2 decimalen
    printf("Het gemiddelde van %.2f en %.2f is: %.2f\n", getal1, getal2, gemiddelde);

    return 0;
}
          