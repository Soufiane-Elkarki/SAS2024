// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>





// #define MAX_R 100
// #define STATUT_VALID 0
// #define STATUT_REPORTE 1
// #define STATUT_ANNULE 2
// #define STATUT_TRAITE 3





// typedef struct {
//     char nom[20];
//     char prenom[20];
//     char telephone[20];
//     int age;
//     int statut; //valide,  reporte, annule, traite
//     int reference;
//     char date_reservation[10]; // Format JJ/MM/AAAA
// } Reservation;

// Reservation reservations[MAX_R];

// int count = 0 ;

//  // Reference unique (generation automatique)

// void generate_reference() {
//     return count + 1;
// }

// // Function pour ajouter un reservation

// void ajouter_reservation(){

//     if (count > MAX_R)
//     {
//         printf("Vous avez entre le maximume de reservation ");

//         return ;
//     }

//     Reservation reservation;
//     printf("Nom: ");
//     scanf("%s", reservation.nom);
//     printf("Prenom: ");
//     scanf("%s", reservation.prenom);
//     printf("Telephone: ");
//     scanf("%s", reservation.telephone);
//     printf("Age: ");
//     scanf("%d", &reservation.age);
//     printf("Statut (valide, reporte, annule, traite): ");
//     scanf("%d", &reservation.statut);
//     printf("Date de reservation (JJ/MM/AAAA): ");
//     scanf("%s", reservation.date_reservation);

//     reservation.reference = generate_reference();
//     reservations[count ++] = reservation;

//     printf("Rservation ajouter avec succes! Reference: %d \n", reservation.reference);
   
// }

// // Function pour afficher un reservation

// void afficher_reservations() {

//     if (count == 0) {

//         printf("Aucune reservation pour afficher . \n ");

//         return;
//     }

//     for (int i = 0; i < count; i++) {

//         Reservation reservation = reservations[i];

//         printf("Reference: %d, Nom: %s, Prenom: %s, Telephone: %s, Age: %d, Statut: %d, Date: %s\n",
//         reservation.reference, reservation.nom, reservstion.prenom, reservation.telephone, 
//         reservation.age, reservation.statut, reservation.date_reservation);

//     }
// }

// // Function pour modifier un reservation

// void modifier_reservation() {
//     int reference;
//     printf("Entrer la reference de reservation modifier : ");
//     scanf("%d", &reference);

//     for (int i = 0; i < count; i++) {
//         if (reservations[i].reference == reference) {
//             printf("Nouveaux Nom: "); 
//             scanf("%s", reservations[i].nom);
//             printf("Nouveaux Prenom: ");
//             scanf("%s", reservations[i].prenom);
//             printf("Nouveaux Telephone: ");
//             scanf("%s", reservations[i].telephone);
//             printf("Nouveaux Age: ");
//             scanf("%d", &reservations[i].age);
//             printf("Nouveaux Statut (valide, reporte, annule, traite) : ");
//             scanf("%d", &reservations[i].statut);
//             printf("Nouveaux Date de reservation (JJ/MM/AAAA): ");
//             scanf("%s", reservations[i].date_reservation);

//             printf("Reservation modifier avec succes .\n");

            
//         }else{
//                 printf("Reservation non trouver.\n");
//         }
        
//         return;
//     }
// }

// // Function pour supprimer un reservation

// void supprimer_reservation() {

//     int reference;

//     printf("Entrer la reference de reservation  supprimer: ");
//     scanf("%d", &reference);

//     for (int i = 0; i < count; i++) {
//         if (reservations[i].reference == reference) {
//             for (int j = i; j < count - 1; j++) {
//                 reservations[j] = reservations[j + 1];
//             }
//             count--;
//             printf("Reservation supprimer .\n");
//             return ;
//         }
//     }
//     printf("Reservation non trouve .\n");
// }

// // Function d'  Affichage (main F) .


// int main() {
//     int choix;

//     // Insertion par default de 10 reservations

//     for (int i = 0; i < 10; i++) {
//         Reservation reservation = {"Nom", "Prenom", "0123456789", 24 + i, STATUT_VALID, 0, "01/11/2024"};
//         reservation.reference = generer_reference();
//         reservations[count++] = reservation;
//     }

//     do {
//         printf("\nMenu:\n");
//         printf("1. Ajouter une reservation\n");
//         printf("2. Modifier une reservation\n");
//         printf("3. Supprimer une reservation\n");
//         printf("4. Afficher les reservations\n");
//         printf("5. Afficher les statistiques\n");
//         printf("0. Quitter\n");
//         printf("Choisissez une option: ");
//         scanf("%d", &choix);

//         switch (choix) {
//             case 1:
//                 ajouter_reservation();
//                 break;
//             case 2:
//                 modifier_reservation();
//                 break;
//             case 3:
//                 supprimer_reservation();
//                 break;
//             case 4:
//                 afficher_reservations();
//                 break;
//             case 5:
//                 afficher_statistiques();
//                 break;
//             case 0:
//                 printf("Au revoir!\n");
//                 break;
//             default:
//                 printf("Option invalide. Veuillez réessayer.\n");
//         }
//     } while (choix != 0);

//     return 0;
// } 







#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESERVATIONS 100
#define MAX_NOM 50
#define MAX_PRENOM 50
#define MAX_TELEPHONE 15
#define STATUT_VALID 0
#define STATUT_REPORTE 1
#define STATUT_ANNULE 2
#define STATUT_TRAITE 3

typedef struct {
    char nom[MAX_NOM];
    char prenom[MAX_PRENOM];
    char telephone[MAX_TELEPHONE];
    int age;
    int statut; // 0: validé, 1: reporté, 2: annulé, 3: traité
    int reference;
    char date_reservation[11]; // Format JJ/MM/AAAA
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int count = 0;

int generer_reference() {
    // Générer une référence unique (peut être amélioré)
    return count + 1;
}

void ajouter_reservation() {
    if (count >= MAX_RESERVATIONS) {
        printf("Nombre maximum de réservations atteint.\n");
        return;
    }

    Reservation r;
    printf("Nom: ");
    scanf("%s", r.nom);
    printf("Prénom: ");
    scanf("%s", r.prenom);
    printf("Téléphone: ");
    scanf("%s", r.telephone);
    printf("Âge: ");
    scanf("%d", &r.age);
    printf("Statut (0: validé, 1: reporté, 2: annulé, 3: traité): ");
    scanf("%d", &r.statut);
    printf("Date de réservation (JJ/MM/AAAA): ");
    scanf("%s", r.date_reservation);

    r.reference = generer_reference();
    reservations[count++] = r;

    printf("Réservation ajoutée avec succès! Référence: %d\n", r.reference);
}

void afficher_reservations() {
    if (count == 0) {
        printf("Aucune réservation à afficher.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        Reservation r = reservations[i];
        printf("Référence: %d, Nom: %s, Prénom: %s, Téléphone: %s, Âge: %d, Statut: %d, Date: %s\n",
               r.reference, r.nom, r.prenom, r.telephone, r.age, r.statut, r.date_reservation);
    }
}

void modifier_reservation() {
    int reference;
    printf("Entrez la référence de la réservation à modifier: ");
    scanf("%d", &reference);

    for (int i = 0; i < count; i++) {
        if (reservations[i].reference == reference) {
            printf("Nouveau Nom: ");
            scanf("%s", reservations[i].nom);
            printf("Nouveau Prénom: ");
            scanf("%s", reservations[i].prenom);
            printf("Nouveau Téléphone: ");
            scanf("%s", reservations[i].telephone);
            printf("Nouvel Âge: ");
            scanf("%d", &reservations[i].age);
            printf("Nouveau Statut (0: validé, 1: reporté, 2: annulé, 3: traité): ");
            scanf("%d", &reservations[i].statut);
            printf("Nouvelle Date de réservation (JJ/MM/AAAA): ");
            scanf("%s", reservations[i].date_reservation);
            printf("Réservation modifiée avec succès!\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void supprimer_reservation() {
    int reference;
    printf("Entrez la référence de la réservation à supprimer: ");
    scanf("%d", &reference);

    for (int i = 0; i < count; i++) {
        if (reservations[i].reference == reference) {
            for (int j = i; j < count - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            count--;
            printf("Réservation supprimée.\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void afficher_statistiques() {
    if (count == 0) {
        printf("Aucune réservation pour générer des statistiques.\n");
        return;
    }

    int total_age = 0, age_0_18 = 0, age_19_35 = 0, age_36_plus = 0;
    int statuts[4] = {0}; // Statut validé, reporté, annulé, traité

    for (int i = 0; i < count; i++) {
        total_age += reservations[i].age;

        if (reservations[i].age <= 18) age_0_18++;
        else if (reservations[i].age <= 35) age_19_35++;
        else age_36_plus++;

        statuts[reservations[i].statut]++;
    }

    printf("Moyenne d'âge des patients: %.2f\n", (float)total_age / count);
    printf("Nombre de patients par tranche d'âge:\n");
    printf("0-18 ans: %d\n", age_0_18);
    printf("19-35 ans: %d\n", age_19_35);
    printf("36+ ans: %d\n", age_36_plus);
    printf("Nombre total de réservations par statut:\n");
    printf("Validé: %d, Reporté: %d, Annulé: %d, Traité: %d\n",
           statuts[STATUT_VALID], statuts[STATUT_REPORTE], statuts[STATUT_ANNULE], statuts[STATUT_TRAITE]);
}

int main() {
    int choix;

    // Insertion par défaut de 10 réservations
    for (int i = 0; i < 10; i++) {
        Reservation r = {"Nom", "Prénom", "0123456789", 30 + i, STATUT_VALID, 0, "01/01/2024"};
        r.reference = generer_reference();
        reservations[count++] = r;
    }

    do {
        printf("\nMenu:\n");
        printf("1. Ajouter une reservation\n");
        printf("2. Modifier une reservation\n");
        printf("3. Supprimer une reservation\n");
        printf("4. Afficher les reservations\n");
        printf("5. Afficher les statistiques\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_reservation();
                break;
            case 2:
                modifier_reservation();
                break;
            case 3:
                supprimer_reservation();
                break;
            case 4:
                afficher_reservations();
                break;
            case 5:
                afficher_statistiques();
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide. Veuillez ressayer.\n");
        }
    } while (choix != 0);

    return 0;
}