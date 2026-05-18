#include <stdio.h>

int main() {
    int getal;

    
    printf("Voer een getal in: ");
    scanf("%d", &getal);

   
    if (getal > 0) {
        printf("\nJe favoriete quote:\n");
        printf("\"De enige manier om geweldig werk te leveren, is door te houden van wat je doet.\" - Steve Jobs\n");
    } else {
        printf("\nHet getal is niet positief of het is nul.\n");
    }

    return 0;
}

         
