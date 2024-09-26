#include <stdio.h>

int main(){

    int nomber;
    int stock[20];
    int in = 0 ;

    printf("Entrez un nomber :");
    scanf("%d", nomber);

    while (nomber > 0)
    {
        stock[in] = nomber % 2 ;

        nomber = nomber / 2 ;

        in++;

    }

    for (int i = in - 1 ; i >= 0; i--)
    {
        printf("l nomber en benair est :%d", nomber);
    }
    
    




    return 0;
}