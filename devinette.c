#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number = rand() % 100 + 1; // Génère un nombre aléatoire entre 1 et 100
    int guess = 0;

    printf("Bienvenue au jeu de la devinette !\n");
    printf("J'ai choisi un nombre entre 1 et 100. Pouvez-vous le deviner ?\n");

        printf("Entrez votre devinette : ");
        scanf("%d", &guess);

        if (guess != number) {
            printf("C'est raté !\n");
        } else {
            printf("Félicitations ! Vous avez deviné le nombre.\n");
        }

    return 0;
}