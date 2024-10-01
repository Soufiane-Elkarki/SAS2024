#include <stdio.h>

int main(){

    int x;

    printf("entrez le nombre d'elements d'un tableau :");
    scanf("%d", &x);
    
    int table[x];

    printf(" saisir %d  elements :\n",x);

    for (int i = 0; i < x ; i++)
    {
        printf(" saisir l'elements %d : ",i + 1);
        scanf("%d", &table[i]);

    }

    int min = table[0];

    for (int i = 1 ; i < x; i++)
    {
        if (table[i] < min)
        {
            min = table[i];
        }
        
    }
   
        printf("le min  de tableux est : %d", min);
   
    return 0;
}