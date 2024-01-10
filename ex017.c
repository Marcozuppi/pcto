#include <stdio.h> 

int sqrot(int num){
if(num>= 0){
for(int i=0; i< num/2; i++){
    if( i*i == num){
        return i;
  }
}
}
}

int discriminante( int a, int b, int c) {
    int dis;
    dis = b*b - 4*a*c;
    dis = sqrot(dis);
    return dis;
}

int main(){
int a;
int b;
int c;
int dis;
int x1;
int x2;

printf("INSERIRE a\n");
scanf("%d", &a);
printf("INSERIRE b\n");
scanf("%d", &b);
printf("INSERIRE c\n");
scanf("%d", &c);

dis = discriminante(a,b,c);
printf("%d\n", dis);

if(dis <0){
    printf(" L'EQUAZIONE NON AMMETTE SOLUZIONI REALI ");
}
else {

    x1 = b*-1 + dis;
    x1 /= 2*a;
    x2 = b*-1 - dis;
    x2 /= 2*a;

    if (dis == 0){
        printf(" L'UNICA SOLUZIONE È %d\n" , x1);
    }
    else{
        printf("LE SOLUZIONI SONO %d E %d\n" ,x1 , x2);
    }
}
return 0;
}