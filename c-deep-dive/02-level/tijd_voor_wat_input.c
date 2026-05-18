#include <stdio.h>

int main() {
    int getal;

    // Vraag de gebruiker om een getal in te voeren
    printf("Voer een geheel getal in: ");

    // Lees de invoer van de gebruiker en sla het op in de variabele 'getal'
    // %d wordt gebruikt voor gehele getallen
    scanf("%d", &getal);

    // Toon het ingevoerde getal terug
    printf("Je hebt het getal %d ingevoerd.\n", getal);

    return 0;
}
     