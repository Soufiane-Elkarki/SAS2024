#include <stdio.h>

int main(){

    int x;

    printf("entrez le nombre d'elements d'un tableau :");
    scanf("%d", &x);
    
    int table[x];
    int somme  = 0;

    printf(" saisir %d  elements :\n",x);

    for (int i = 0; i < x ; i++)
    {
        printf(" saisir l'elements %d : ",i + 1);
        scanf("%d", &table[i]);

        somme +=table[i];
    }

        printf("la somme de tableux est : %d", somme);
   
    return 0;
}