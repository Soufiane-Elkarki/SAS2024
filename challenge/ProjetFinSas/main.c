#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_R 100
#define STATUT_VALID 0
#define STATUT_REPORTE 1
#define STATUT_ANNULE 2
#define STATUT_TRAITE 3

typedef struct {
    char nom[20];
    char prenom[20];
    char telephone[20];
    int age;
    int statut;
    int reference; 
    char date_reservation[11]; 
} Reservation;

Reservation reservations[MAX_R];
int count = 0;


int generate_reference() {
    return count + 1;
}


void ajouter_reservation() {
    if (count >= MAX_R) { 
        printf("Vous avez atteint le maximum de réservations.\n");
        return;
    }

    Reservation reservation;
    printf("Nom: ");
    scanf("%s", reservation.nom);
    printf("Prenom: ");
    scanf("%s", reservation.prenom);
    printf("Telephone: ");
    scanf("%s", reservation.telephone);
    printf("Age: ");
    scanf("%d", &reservation.age);
    printf("Date de reservation (JJ/MM/AAAA): ");
    scanf("%s", reservation.date_reservation);

    printf("Statut (0: valide, 1: reporte, 2: annule, 3: traite): ");
    scanf("%d", &reservation.statut);
  
    reservation.reference = generate_reference();
    reservations[count++] = reservation;

    printf("Réservation ajoutée avec succès! Référence: %d \n", reservation.reference);
}


void afficher_reservations() {
    if (count == 0) {
        printf("Aucune réservation à afficher.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        Reservation reservation = reservations[i];
        printf("Référence: %d, Nom: %s, Prenom: %s, Telephone: %s, Age: %d, Statut: %d, Date: %s\n",
               reservation.reference, reservation.nom, reservation.prenom, reservation.telephone, 
               reservation.age, reservation.statut, reservation.date_reservation);
    }
}

void modifier_reservation() {
    int reference;
    printf("Entrer la référence de la réservation à modifier: ");
    scanf("%d", &reference);

    for (int i = 0; i < count; i++) {
        if (reservations[i].reference == reference) {
            printf("Nouveau Nom: ");
            scanf("%s", reservations[i].nom);

            printf("Nouveau Prenom: ");
            scanf("%s", reservations[i].prenom);

            printf("Nouveau Telephone: ");
            scanf("%s", reservations[i].telephone);

            printf("Nouveau Age: ");
            scanf("%d", &reservations[i].age);

            printf("Nouveau Statut (0: valide, 1: reporte, 2: annule, 3: traite): ");
            scanf("%d", &reservations[i].statut);
            // strcpy("valide", reservations[i].statut);

            printf("Nouvelle Date de réservation (JJ/MM/AAAA): ");
            scanf("%s", reservations[i].date_reservation);

            printf("Réservation modifiée avec succès.\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void supprimer_reservation() {
    int reference;
    printf("Entrer la référence de la réservation à supprimer: ");
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


int main() {
    int choix;

    for (int i = 0; i < 10; i++) {
        Reservation reservation = {"Nom", "Prenom", "0123456789", 24 + i, STATUT_VALID, 0, "01/11/2024"};
        reservation.reference = generate_reference();
        reservations[count++] = reservation;
    }

    do {
        printf("\nMenu:\n");
        printf("1. Ajouter une réservation\n");
        printf("2. Modifier une réservation\n");
        printf("3. Supprimer une réservation\n");
        printf("4. Afficher les réservations\n");
        printf("5. Afficher les statistiques (non implémenté)\n");
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
            case
                printf("Fonctionnalité non implémentée.\n");
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide. Veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
