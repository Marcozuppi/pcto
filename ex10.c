#include <stdio.h>

int main (){


int num;
int primo=1;

printf(" INSERISCI UN NUMERO");
scanf("%d" , &num);

for( int i=2; i< num; i++){
if(num % i== 0){
primo=0;
}
}
if(primo ==1){
printf("IL NUMERO %d È PRIMO\n" , num);
}

else if(primo ==0){
 printf("IL NUMERO %d  NON È PRIMO\n " , num);

return 0;
}
}
  
