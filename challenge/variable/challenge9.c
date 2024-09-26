#include <stdio.h>
#include <math.h>

int main(){
    
    float x1;
    float y1;
    float z1;

    float x2;
    float y2;
    float z2;

    float distance;

    printf("donner moi x de la piont 1 :");
    scanf("%f" , &x1);
    printf("donner moi y de la piont 1 :");
    scanf("%f" , &y1);
    printf("donner moi z de la piont 1 :");
    scanf("%f" , &z1);

    printf("donner moi x de la piont 2 :");
    scanf("%f" , &x2);
    printf("donner moi y de la piont 2 :");
    scanf("%f" , &y2);
    printf("donner moi z de la piont 2 :");
    scanf("%f" , &z2);

    distance = sqrt(pow(x2-x1 , 2) + pow(y2-y1 , 2) + pow(z2-z1 , 2));

    printf("la distance entre les deux points donnés dans un espace 3D est :%.2f", distance);

    return 0;
    
}