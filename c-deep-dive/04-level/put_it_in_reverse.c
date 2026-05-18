#include <stdio.h>
#include <string.h>

char* reverse_string(char* string_to_reverse) {
    int lengte = strlen(string_to_reverse);
    

    int start = 0;
    int einde = lengte - 1;
    char temp;

    while (start < einde) {
        
        temp = string_to_reverse[start];
        string_to_reverse[start] = string_to_reverse[einde];
        string_to_reverse[einde] = temp;

        start++;
        einde--;
    }

    return string_to_reverse;
}

int main() {
    char tekst[] = "Hallo wereld";

    printf("Origineel: %s\n", tekst);
    printf("Omgedraaid: %s\n", reverse_string(tekst));

    return 0;
}
