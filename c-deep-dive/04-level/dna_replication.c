#include <stdio.h>
#include <string.h>

int hammingAfstand(const char *dna1, const char *dna2) {
    int lengte1 = strlen(dna1);
    int lengte2 = strlen(dna2);

 
    if (lengte1 != lengte2) {
        printf("Error: DNA-strengen hebben niet dezelfde lengte.\n");
        return -1;
    }

    int afstand = 0;

    for (int i = 0; i < lengte1; i++) {
        if (dna1[i] != dna2[i]) {
            afstand++;
        }
    }

    return afstand;
}

int main() {
    char dna1[100];
    char dna2[100];

    printf("Geef een DNA streng op:\n");
    scanf("%s", dna1);

    printf("Geef een DNA streng op:\n");
    scanf("%s", dna2);

    int afstand = hammingAfstand(dna1, dna2);

    if (afstand != -1) {
        printf("\nDe hamming afstand:\n");
        printf("%s\n", dna1);
        printf("%s\n", dna2);

        for (int i = 0; i < strlen(dna1); i++) {
            if (dna1[i] != dna2[i]) {
                printf("^");
            } else {
                printf(" ");
            }
        }

        printf("\nDe hamming afstand is: %d\n", afstand);
    }

    return 0;
}
