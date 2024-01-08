#include <stdio.h>

int main() {
     int numeroUno;
    int numeroDue;
    int differenza;
    int somma;
    int prodotto;
    int divisione;
    int modulo;

    printf("INSERISCI DUE NUMERI\n");
    scanf("%d",&numeroUno);
    scanf("%d" , &numeroDue);
    somma= numeroUno + numeroDue;
    printf("LA SOMMA di %d E DI %d È : %d\n" , numeroUno , numeroDue , somma);
     
     differenza= numeroUno - numeroDue;
    printf("LA DIFFERENZA DI %d E DI %d È: %d\n ", numeroUno , numeroDue, differenza);
    divisione = numeroUno / numeroDue;
    printf("LA DIVISIONE DI %d  E DI %d È : %d\n" , numeroUno , numeroDue , divisione );
    prodotto = numeroUno * numeroDue ;
     printf("IL PRODOTTO DI %d  E DI %d È : %d\n" , numeroUno , numeroDue , prodotto );
     modulo = numeroUno % numeroDue;
      printf("IL MODULO DI %d  E DI %d È : %d\n" , numeroUno , numeroDue , modulo );
      return 0;
   }  