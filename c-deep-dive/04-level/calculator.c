#include <stdio.h>

int main() {
    int getal1, getal2;
    char operator;
    int resultaat;

    printf("Geef het eerste getal: ");
    scanf("%d", &getal1);

    printf("Geef een operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Geef het tweede getal: ");
    scanf("%d", &getal2);

    if ((operator == '/' || operator == '%') && getal2 == 0) {
        printf("Fout: delen door 0 is niet toegestaan.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            resultaat = getal1 + getal2;
            break;
        case '-':
            resultaat = getal1 - getal2;
            break;
        case '*':
            resultaat = getal1 * getal2;
            break;
        case '/':
            resultaat = getal1 / getal2;
            break;
        case '%':
            resultaat = getal1 % getal2;
            break;
        default:
            printf("Fout: ongeldige operator.\n");
            return 1;
    }

    printf("Resultaat: %d\n", resultaat);

    return 0;
}
