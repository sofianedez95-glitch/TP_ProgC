#include <stdio.h>
#include <math.h>

int main() {
    double rayon, aire, perimetre;
    const double pi = M_PI;

    rayon = 5.0; 

    aire = pi * rayon * rayon;
    perimetre = 2 * pi * rayon;

    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Perimetre du cercle : %.2f\n", perimetre);

    return 0;
}

