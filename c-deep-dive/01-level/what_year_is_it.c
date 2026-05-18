#include <stdio.h>

int main() {
    int totaalDagen = 1329;
    int dagenInJaar = 365;
    int jaren;
    int resterendeDagen;

    // Bereken hele jaren
    jaren = totaalDagen / dagenInJaar;

   

    printf("%d dagen is gelijk aan:\n", totaalDagen);
    printf("%d hele jaren .\n", jaren);

    return 0;
}
