#include <stdio.h>
#include <stdlib.h>
#define TAILLEPARJOUR 10
#define TAILLEPARSEMAINE 7

//lorsque ça clic
void prioritedansliste(int *liste, int taille){
    printf("Vous souhaitez échanger la priorité de quel élément ? (0 à %d)\n", taille - 1);
    int index1, index2;
    scanf("%d", &index1);
    printf("Vous souhaitez échanger la priorité avec qu el élément ? (0 à %d)\n", taille - 1);
    scanf("%d", &index2);
    int aux = liste[index1];
    liste[index1] = liste[index2];
    liste[index2] = aux;

}

void affichageCh( char *tabjour, int n) {
    int i;
    for(i=1;i<=n;i++) {
        printf("%s\n", tabjour[i-1]);
    }
}

void affichage(int *liste, char *tabjour) {
    for (int n = 0; n < TAILLEPARSEMAINE; n++) {
        printf("%s : ", tabjour[n]);
        affichageCh(liste[n], TAILLEPARJOUR);
    }
}
int main() {
    int *liste[TAILLEPARSEMAINE];
    for (int i = 0; i < TAILLEPARSEMAINE; i++) {
        liste[i] = (int *)malloc(TAILLEPARJOUR * sizeof(int));
        for (int j = 0; j < TAILLEPARJOUR; j++) {
            liste[i][j] = 0; // Initialiser les éléments à 0
        }
    }
    
    printf("liste :\n");
    char *tabjour[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    //affichageCh(tabjour, TAILLEPARSEMAINE);
    affichage(*liste, *tabjour);
    return 0;
}