#include <stdio.h>
int main(){
int somma;
int numero;
int media;

if(numero>0){
printf("INSERIRE UN NUMERO");
scanf("%d" , &numero);

while(numero>0);{
somma+=numero;
numero--;
}
media = somma / numero;

printf("LA MEDIA DELLE SOMME È %d" , media);
}
else {
    printf("ERROR\n");
}
return 0;
}