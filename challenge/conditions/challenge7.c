#include <stdio.h>

int main(){

    char c;

    printf("Entrez un  caractere :");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("l'alphabet et majuscule . ");
    }
    else{
        printf("l'alphabet et   minuscule . ");
    }
    
    return 0;
}