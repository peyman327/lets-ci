#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Voer het eerste getal in: ");
    scanf("%d", &num1);

    printf("Voer een operator in (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        printf("Fout: Ongeldige operator.\n");
        return 1;
    }

    printf("Voer het tweede getal in: ");
    scanf("%d", &num2);

    if ((op == '/' || op == '%') && num2 == 0) {
        printf("Fout: Delen door 0 is niet toegestaan.\n");
        return 1;
    }

    switch(op) {
        case '+':
            printf("Resultaat: %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultaat: %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultaat: %d\n", num1 * num2);
            break;

        case '/':
            printf("Resultaat: %d\n", num1 / num2);
            break;

        case '%':
            printf("Resultaat: %d\n", num1 % num2);
            break;
    }

    return 0;
}