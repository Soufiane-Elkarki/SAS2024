#include <stdio.h>

int main(){

    int table[5] = {1,2,3,4,5};
    int taille = sizeof(table)/sizeof(table[0]);

    for (int i = 0; i < taille; i++)
    {
        printf("%d \n",table[i]);
    }
    

    return 0;
}