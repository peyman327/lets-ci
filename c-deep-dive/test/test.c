#include <stdio.h>
int main() 
{
char naam[30];
printf("Wat is je naam? \n");
fgets(naam, sizeof(naam), stdin);
printf("Je naam is: ");
puts(naam);
return 0;   
}