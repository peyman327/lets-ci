#include <stdio.h>

int main() {
    int getal;

    printf("Voer een ASCII-getal in (0-127): ");
    
    if (scanf("%d", &getal) != 1) {
        printf("Ongeldige invoer.\n");
        return 1;
    }

   
    if (getal < 0 || getal > 127) {
        printf("Waarschuwing: Getal %d valt buiten het standaard 7-bit ASCII-bereik (0-127).\n", getal);
    }

   
    printf("Het ASCII-karakter voor %d is: %c\n", getal, (char)getal);

    return 0;
}
                