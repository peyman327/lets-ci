#include <stdio.h>

void printSchaakbord() {
    for(int rij = 0; rij < 8; rij++) {
        for(int kolom = 0; kolom < 8; kolom++) {

            if((rij + kolom) % 2 == 0) {
                printf("|*");
            } else {
                printf("|#");
            }
        }
        printf("|\n");  
    }
}

int main() {
    printSchaakbord();
    return 0;
}
