#include <stdio.h>

int main (){
    char let;
    printf("INSERIRE UNA LETTERA");
    scanf("%c" ,&let);

    if(let =='a' || let == 'e' || let  == 'i' ||let == 'o' || let == 'u' || let =='A' || let == 'E' || let  == 'I' ||let == 'O' || let == 'U' ){
        printf("%c È UNA VOCALE", let );
    }

else {

    printf("%c È UNA CONSONANTE", let);
}
return 0;
}