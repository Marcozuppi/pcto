#include <stdio.h>

int fattoriale(int num){


int res= num;
for(int i=num-1; i>0; i--){
res *=i;
}
}

int main(){
    int num;
    int res;
    printf("INSERIRE UN NUMERO\n");
    scanf("%d", &num);

    res= fattoriale(num);
    printf("IL RISULTATO È %d\n" , res);
    return 0;
}   