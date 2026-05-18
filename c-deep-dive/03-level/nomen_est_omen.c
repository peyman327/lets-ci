#include <stdio.h>

int main() {
    char naam[50]; 

    printf("Wat is je naam? ");
    
    fgets(naam, sizeof(naam), stdin);

    printf("Hallo, %s", naam);

    return 0;
}
   