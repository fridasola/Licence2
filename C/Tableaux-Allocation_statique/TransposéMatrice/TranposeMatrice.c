#include <stdio.h>
#define NBLIGNES 10
#define NBCOLONNES 10

int main()
{
    int matrice[NBLIGNES][NBCOLONNES],i,j,transposee[NBCOLONNES][NBLIGNES];
    do
    {
        printf("Entrez le nb de lignes de votre matrice (nb <= %d):", NBLIGNES);
        scanf("%d",&i);
    }
    while(i <= 0 || i > NBLIGNES);
    do
    {
        printf("Entrez le nb de colonnes de votre matrice (nb <= %d):", NBCOLONNES);
        scanf("%d",&j);
    }
    while(j <= 0 || j > NBCOLONNES);
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("Entrez la valeur de matrice [%d][%d]:",k,l);
            scanf("%d",&matrice[k][l]);
        }
    }
    printf("******Affichage de la matrice ******\n");
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("%d \t",matrice[k][l]);
        }
        printf("\n");
    }
    printf("******Affichage de la matrice transposée ******\n");
    for(int k=0;k<j;k++)
    {
        for(int l=0;l<i;l++)
        {
            transposee[k][l] = matrice[l][k];
            printf("%d \t",transposee[k][l]);
        }
        printf("\n");
    }
}