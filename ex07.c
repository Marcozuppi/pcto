#include <stdio.h>

int main(){


    int numeroUno;
    int numeroDue;
    int modulo;

    printf("INSERISCI DUE NUMERI");
scanf("%d %d" , &numeroUno , &numeroDue);


modulo= numeroUno % numeroDue;

if (modulo ==0){
printf("%d  È MULTIPLO DI %d\n" ,  numeroUno , numeroDue );
}
else {
      printf("%d NON È MULTIPLO DI %d\n" , numeroUno , numeroDue);
}

return 0;
}