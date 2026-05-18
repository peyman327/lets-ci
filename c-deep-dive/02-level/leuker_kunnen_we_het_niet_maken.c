#include <stdio.h>

int main() {
    float prijsExcl, btwBedrag, totaalPrijs;
    const float btwPercentage = 0.21; 

    printf("Voer de prijs van het product in (exclusief BTW): ");
    scanf("%f", &prijsExcl);

    btwBedrag = prijsExcl * btwPercentage;
    
    totaalPrijs = prijsExcl + btwBedrag;

    printf("\n--- BTW Berekening (21%%) ---\n");
    printf("Prijs excl. BTW:  EUR %.2f\n", prijsExcl);
    printf("BTW bedrag:       EUR %.2f\n", btwBedrag);
    printf("Totaalprijs:      EUR %.2f\n", totaalPrijs);

    return 0;
}

    
