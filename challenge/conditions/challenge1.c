#include <stdio.h>

int main(){

    int nomber;

    printf("Entrez un nombre: ");
    scanf("%d" , &nomber);

    if (nomber % 2 == 0)
    {
       printf("%d est pair ",nomber);
    }else{
        printf("%d est impair", nomber);
    }
    



    return 0;
}