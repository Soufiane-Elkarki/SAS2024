#include <stdio.h>

int main(){

int a;
int b;

int somme;

printf("Entrez un nombre 1: ");
scanf("%d", &a);

printf("Entrez un nombre 2: ");
scanf("%d", &b);

somme = a + b ;

if (a == b)
{
    printf("La somme est :%d",somme * 3);
}else{
    printf("La somme est:%d ", somme);
}

return 0;

}