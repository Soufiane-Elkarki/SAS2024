#include <stdio.h>
#include <math.h>

int main(){

    float longueur;
    float largeur;

    float surface;

    printf("donner moi la longueur de rectangle :");
    scanf("%f", &longueur);
    printf("donner moi la largeur de rectangle :");
    scanf("%f", &largeur);

    surface = longueur * largeur ;

    printf("la surface de rectangle est :%.2f",surface);

    return 0;
}