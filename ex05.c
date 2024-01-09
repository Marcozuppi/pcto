#include <stdio.h>

int main () {

int numero;
int modulo;

printf("INSERISCI UN NUMERO\n");
scanf("%d", &numero);

modulo=numero % 2;

if(modulo==0) {
      printf("IL NUMERO %d È PARI", numero);
}
   else if (modulo != 0) {
    printf("IL NUMERO %d È DISPARI\n", numero);
   }
return 0;
}