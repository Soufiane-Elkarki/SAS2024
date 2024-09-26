#include <stdio.h>
int main(){

float vitesse_km;
float vitesse_m;

printf("donner moi un vitesse en kilomètres par heure (km/h)  : ");
scanf("%f", &vitesse_km );

vitesse_m =  vitesse_km * 0.27778;

printf("la vitesse en mètres par seconde (m/s) est : %.2f",vitesse_m);


    return 0;
}