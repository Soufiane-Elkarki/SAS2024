#include <stdio.h>


int main() {


    int annee;
    printf("Entrer Un Annee : ");
    scanf("%d", &annee);

    if (annee == 0)
    {
        printf("entrez un otre annee SVP .");

        return 1;
    }
    
        int mois = annee * 12;
        int jours = mois * 30;
        int heures = jours * 24;
        int minutes = heures * 60;
        int secondes = minutes * 60;

        printf("dans votre annee il'ya %d Mois : \n", mois);
        printf("dans votre annee il'ya %d Jours : \n", jours);
        printf("dans votre annee il'ya %d Heures : \n", heures);
        printf("dans votre annee il'ya %d Minutes : \n", minutes);
        printf("dans votre annee il'ya %d Secondes : \n", secondes);


    return 0;
}
