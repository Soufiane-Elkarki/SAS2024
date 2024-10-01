#include <stdio.h>

int main(){


    int x;
    
    // int taille = sizeof(table)/sizeof(table[0]);

    printf("entrez le nombre d'elements d'un tableau :");
    scanf("%d", &x);
    
    int table[x];

    printf(" saisir %d  elements :",x);

    for (int i = 0; i < x ; i++)
    {
        printf(" saisir l'elements %d :",i + 1);
        scanf("%d", &table[i]);
    }

    for (int i = 0; i < x ; i++)
    {
        printf("%d \n",table[i]);
    }
    

    return 0;
}