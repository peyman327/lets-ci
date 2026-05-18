#include <stdio.h>

int main() {

    int a[] = {66,73,84,32,65,99,97,100,101,109,121};
    int lengte = sizeof(a) / sizeof(a[0]);

    printf("ASCII omzetting:\n");

    for(int i = 0; i < lengte; i++) {
        printf("%c", a[i]);   
    }

    printf("\n");

    return 0;
}
