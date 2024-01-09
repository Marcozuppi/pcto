#include <stdio.h>

int main(){

float celsius;
float fahrenheit;
float kelvin;


printf("INSERIRE TEMPERATURA IN CELSIUS\n");
scanf("%f" , &celsius);

if(celsius < -273.15) {
printf("FATAL ERROR\n");    
}
else {
    fahrenheit= celsius * 9/5 +32;
printf("%f IN FAHRENHEIT È %f\n" , celsius , fahrenheit);
    kelvin = celsius + 273.15;
     printf("%f IN KELVIN È %f\n" , celsius , kelvin);
}
return 0;
}