#include <stdio.h>
int main(){
    float a;
    float b;
    float c;

    float ap;
    float bp;
    float cp;

    float moyenne ;

    printf("donner moi 1er nombre :");
    scanf("%f", &a);
    printf("donner moi 2er nombre :");
    scanf("%f", &b);
    printf("donner moi 3er nombre :");
    scanf("%f", &c); 

    ap = a *2 ;
    bp = b *3 ;
    cp = c *5 ;

    moyenne = (ap + bp + cp) / 10 ;

    printf("votre moyenne est :%.2f",moyenne);

    return 0;
}