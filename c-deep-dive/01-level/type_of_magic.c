#include <stdio.h>

int main(){

   int a = 739;
   float b = 368.14;
   int c = 'W';
float som1 = a + b;
int som2 = a + c;
float som3 = b + c;

printf("Optellen van a en b: %.9f\n", som1);
printf("Optellen van a en c: %d\n", som2);
printf("Optellen van b en c: %.9f\n", som3);

    return 0;
}