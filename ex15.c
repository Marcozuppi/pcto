#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
int res;
res = nb;
if(power <0){
    return 0;
}
if(power ==0){
    return 0;
}
while(power-- >1){
    res *= nb;
}
return res;
}

int main(){

    int nb;
    int power;
    int res;
    printf("INSERIRE UN NUMERO");
    scanf("%d", &nb );
    printf("INSERIRE UN INDICE");
    scanf("%d", &power);
    res = ft_iterative_power(nb,power);
printf("IL RISULTATO È %d\n", res);
return 0;
}