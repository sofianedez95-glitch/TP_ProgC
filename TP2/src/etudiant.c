#include <stdio.h>

int main() {
    char noms[5][30] = {
        "Dupont", "Martin", "Durand", "Bernard", "Petit"
    };

    char prenoms[5][30] = {
        "Alice", "Hugo", "Emma", "Lucas", "Sarah"
    };

    char adresses[5][100] = {
        "12 rue de Lyon, Paris",
        "8 avenue Victor Hugo, Marseille",
        "3 boulevard de la Gare, Toulouse",
        "25 rue Nationale, Lille",
        "10 chemin des Roses, Nantes"
    };

    float note_prog[5] = {15.5, 12.0, 17.0, 10.5, 18.0};
    float note_sys[5]  = {14.0, 13.5, 16.0, 11.0, 19.0};

    printf("===== Informations des étudiants =====\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf(" Nom       : %s\n", noms[i]);
        printf(" Prénom    : %s\n", prenoms[i]);
        printf(" Adresse   : %s\n", adresses[i]);
        printf(" Note C    : %.2f\n", note_prog[i]);
        printf(" Note SE   : %.2f\n", note_sys[i]);
        printf("--------------------------------------\n");
    }

    return 0;
}
