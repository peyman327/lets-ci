#include <stdio.h>
#include <string.h> 

int main() {
    char naam[100]; 
    int lengte;

    printf("Voer uw volledige naam in: ");
    
    fgets(naam, sizeof(naam), stdin);

    naam[strcspn(naam, "\n")] = 0;

    lengte = strlen(naam);
    printf("De naam '%s' bevat %d karakters.\n", naam, lengte);

    return 0;
}

 
  