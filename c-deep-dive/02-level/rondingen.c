#include <stdio.h>
#include <math.h> 

int main() {
    double getal;
    int afgerondGetal;

   
    printf("Voer een decimaal getal in: ");
    if (scanf("%lf", &getal) != 1) {
        printf("Ongeldige invoer.\n");
        return 1;
    }

    
    afgerondGetal = (int)ceil(getal);

   
    printf("Naar boven afgerond: %d\n", afgerondGetal);

    return 0;
}

  