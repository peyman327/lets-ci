#include <stdio.h>

int main() {
    int getal;

    printf("Voer een getal in: ");
    scanf("%d", &getal);

    if (getal % 2 == 0) {
        printf("Het getal is even.\n");
        printf("Alle even getallen tot en met %d:\n", getal);

        for (int i = 0; i <= getal; i += 2) {
            printf("%d ", i);
        }
    } else {
        printf("Het getal is oneven.\n");
        printf("Alle oneven getallen tot en met %d:\n", getal);

        for (int i = 1; i <= getal; i += 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
