#include <stdio.h>

int main(){

    int nomber;
    printf("Entez un nomber : ");
    scanf("%d", &nomber);

    int a = nomber/1000 ;
    int b = nomber/100 - (a*10);
    int c = nomber/10 - (a*100 + b*10);
    int d = nomber/1 - (a*1000 + b *100 + c*10);

    printf("l'inverse de nomber %d est : %d%d%d%d ", nomber,d,c,b,a);



    return 0;
}