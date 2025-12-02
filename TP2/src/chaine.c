#include <stdio.h>

int main() {
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0, j = 0;

    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 = %d\n", longueur);

    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';  

    printf("Copie de chaine1 = %s\n", copie);


    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0'; 

    printf("Concaténation = %s\n", concat);

    return 0;
}
