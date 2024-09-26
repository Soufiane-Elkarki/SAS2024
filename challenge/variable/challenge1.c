#include <stdio.h>

int main() {

    char nom[20];
    char prenom[20];
    int age;
    char sexe[20];
    char email[30];

    printf("entrer votre nom :");
    scanf("%s", &nom);
    printf("entrer votre prenom :");
    scanf("%s", &prenom);
    printf("entrer votre age :");
    scanf("%d", &age);
    printf("entrer votre sexe :");
    scanf("%s", &sexe);
    printf("entrer votre email :");
    scanf("%s", &email);

    printf("votre nom est :%s\n", nom);
    printf("votre prenom est :%s\n", prenom);
    printf("votre age est :%d\n", age);
    printf("votre sexe est :%s\n", sexe);
    printf("votre email est :%s\n", email);

    return 0;
}
