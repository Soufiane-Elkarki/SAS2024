#include <stdio.h>
#include <math.h>

int main(){

    float r;
    float pi = 3.14;
    float volume;

    printf("donner moi le rayon de la sphere :");
    scanf("%f" , &r);

    volume = (4/3) * pi * pow(r , 3);

    printf("le volume de la sphere est :%.2f", volume);













    return 0;
}