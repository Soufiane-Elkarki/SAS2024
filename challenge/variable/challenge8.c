#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;

    float moyenne ;

    printf("donner moi 1er nombre :");
    scanf("%f", &a);
    printf("donner moi 2er nombre :");
    scanf("%f", &b);
    printf("donner moi 3er nombre :");
    scanf("%f", &c); 

    moyenne  =pow (a * b * c , 1/3);
    printf("votre Moyenne geometrique est : %.2f", moyenne);


    return 0;
    
}