#include <stdio.h>

int main(){

    float num ;

    printf("Entrez un nomber :");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("le nomber et positif");
    }
     else if (num <0)
    {
        printf("le nomber et negatif");
    }
    else
    {
        printf("le nomber et zero");
    }

    return 0;
}