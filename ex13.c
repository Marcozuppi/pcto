#include <stdio.h>
int main() {

float somma;
float numero;
float media;
float i = 1;

printf("INSERIRE UN NUMERO\n");
scanf("%f" , &numero);
somma = numero;

while(numero > 0){
printf(" INSERIRE UN NUMERO\n");
scanf("%f" , &numero);
somma += numero;
i++;
media = somma / i;
if(numero > 0 ){
    printf("LA MEDIA È %f\n " , media);
}
}
}