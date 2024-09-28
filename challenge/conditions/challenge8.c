#include <stdio.h>

int main(){

    float moyenne ;

    printf("Entrez votre moyenne :");
    scanf("%f", &moyenne);

    if (moyenne < 10)
    {
        printf("Votre montion est 'recale' .");
    }
    
    else if (moyenne >= 10 && moyenne < 12)
    {
        printf("Votre montion est 'passable' .");
    }
    
    else if (moyenne >= 12 && moyenne <14)
    {
        printf("Votre montion est 'assez bien' .");
    }
    
    else if (moyenne >= 14 && moyenne < 16)
    {
        printf("Votre montion est 'bien' .");
    }
    else if (moyenne >= 16 && moyenne <=20)
    {
        printf("Votre montion est 'trez bien' .");
    }
    else{
        printf("EREUR!!!!!!");
    }
    

    return 0;
}
