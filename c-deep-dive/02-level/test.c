#include <stdio.h>

int main () {

    int getal;

    printf("Van welk jaar wil je weten of het een schrikkeljaar is op de Gregoriaanse kalender? ");  
    scanf("%d",&getal);

    if (getal%4 == 0 && getal%100 != 0) {
    printf ("Het is een Schrikkeljaar!");   
 }  else if (getal%400 == 0)   
 {printf ("het is een Schrikkeljaar!");}     
 
    return 0;

    }
