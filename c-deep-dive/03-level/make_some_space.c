#include <stdio.h>
#include <string.h> 

int main() {
    char naam[100]; 
    int lengte = 0;

    printf("Voer uw volledige naam in: ");
    
    fgets(naam, sizeof(naam), stdin);

    naam[strcspn(naam, "\n")] = 0;

    for (int i = 0; naam[i] != '\0'; i++) {
        if (naam[i] != ' ') {
            lengte++;
        }
    }

    printf("De naam '%s' bevat %d karakters (zonder spaties).\n", naam, lengte);

    return 0;
}
