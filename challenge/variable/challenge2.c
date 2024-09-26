#include <stdio.h>
int main(){

float temperature;
float kelvin;

printf("donner moi un temperature en Celsius : ");
scanf("%f", &temperature );

kelvin =  temperature + 273.15;

printf("la temperature en kelvin est : %.2f",kelvin);


    return 0;
}