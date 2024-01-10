#include <stdio.h>

int sconto (int numPezzi, int prezzo){
    
 }
    


int main(){
int prezzo;
int numPezzi = 1;
int prezzoScontato;

    while(numPezzi > 0){
        printf("INSERIRE NUMERO ORDINI\n");
        scanf("%d" , &numPezzi);
        if(numPezzi>0){
prezzo = numPezzi*5;
if(numPezzi >30){
    prezzo -= prezzo/100*15;

}
else if(numPezzi >30);{
    prezzo -= prezzo/100*10;
}
printf("IL PREZZO È %d\n" , prezzo);


 }
 }
 return 0;
}




