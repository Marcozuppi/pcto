#include <stdio.h>

int main(){


int latoA;
int latoB;
int latoC;

printf(" INSERISCI LE MISURE DEI TRE LATI");
scanf("%d %d %d" , &latoA , &latoB , &latoC );

 if(latoA == latoB && latoB== latoA){
     printf("IL TRIANGOLO È EQUILATERO\n");
}

else if(latoA == latoB || latoA == latoB || latoB == latoA){
    printf("IL TRIANGOLO È ISOSCELE\n");
}

   else {

    printf("IL TRIANGOLO È SCALENO\n");

   }

return 0;
}