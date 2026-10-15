#include <stdio.h>
#define TAILLE 50
int main()
{
    int nb,i;
    do
    {
        printf("Rentrez le nombre d'éléments à saisir (nb <= %d):", TAILLE);
        scanf("%d",&nb);
        fflush(stdin);
    }
    while(nb <= 0 || nb > TAILLE);
    int t[TAILLE];
    printf("****Les chiffres doivent être rentrés par ordre croissant****\n");
    for (i=0;i<nb;i++)
    {
        printf("Entrer le chiffre n° %d:",i+1);
        scanf("%d",&t[i]);
        fflush(stdin);
    }
    printf("******Affichage du tableau initial ******\n");
    printf("vecteur t: ");
    for (i=0;i<nb;i++)
    {
        printf("%d \t",t[i]);
    }
    int t1[TAILLE],effectif[TAILLE],e=0;
    for(i=0;i<nb;i++)
    {
        if (t[i] == t1[e-1])
        {
            effectif[e-1]++;
        }
        else
        {
            t1[e]=t[i];
            effectif[e]=1;
            e++;
        }
    }
    printf("\n******Affichage du tableau après et des effectifs******\n");
    printf("vecteur t1: ");
    for (i=0;i<e;i++)
    {
        printf("%d \t",t1[i]);
    }
    printf("\nvecteur effectif: ");
    for (i=0;i<e;i++)
    {
        printf("%d \t",effectif[i]);
    }
    return 0;
}