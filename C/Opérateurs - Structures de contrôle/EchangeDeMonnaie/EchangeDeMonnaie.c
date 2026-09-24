#include <stdio.h>

int main() {
    int montant;
    int nbbilletde5 = 0, nbpiecede2 = 0, nbpiecede1 = 0;

    printf("Entrez le montant entier en euros entre 0 et 15: ");
    scanf("%d", &montant);

    while (montant > 0 && montant < 15) {
        if (montant >= 5) {
            montant -=5;
            nbbilletde5++;
        } else if (montant >= 2){
            montant -=2;
            nbpiecede2++;
        } else {
            montant -=1;
            nbpiecede1++;
        }
    }

    printf("Billets de 5 euros: %d\n", nbbilletde5);
    printf("Pièces de 2 euros: %d\n", nbpiecede2);
    printf("Pièces de 1 euro: %d\n", nbpiecede1);

    return 0;
}