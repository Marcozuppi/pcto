#include <stdio.h>

int main() {


int età;
    printf("SIAMO IN ITALIA\n");
    printf("INSERISCI LA TUA ETà\n");
 scanf(" %d", &età);
  if ( età >=18 ){
    printf("puoi prendere la patente\n");
  }
  else if(età<18) {
    printf("NON PUOI PRENDERE LA PATENTE\n");
  }
 return 0;
}
 