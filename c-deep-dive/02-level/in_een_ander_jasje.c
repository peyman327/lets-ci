#include <stdio.h>

int main() {
    int getal1, getal2;
    float resultaat;

    printf("Voer het eerste gehele getal in: ");
    scanf("%d", &getal1);

    printf("Voer het tweede gehele getal in: ");
    scanf("%d", &getal2);

    if (getal2 == 0) {
        printf("Fout: Delen door nul is niet toegestaan.\n");
    } else {
       
        resultaat = (float)getal1 / getal2;

        printf("Het resultaat van %d / %d is: %.2f\n", getal1, getal2, resultaat);
    }

    return 0;
}
  