#include <stdio.h>

int main() {
    int compteur = 5; 
    
    printf("Triangle rectangle avec des boucles for (compteur = %d)\n\n", compteur);

    for (int i = 1; i <= compteur; i++) {         
        for (int j = 1; j <= i; j++) {           
          
            if (i == 1) {
                printf("* ");
            } else if (i == 2) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("* ");  
            } else if (i == 3 || i == 4) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

