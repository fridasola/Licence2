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
    int t1[TAILLE],effectif[TAILLE],j=-1;
    for (i=0;i<nb;i++)
    {
        int k = 0;
        while (k <= j && t1[k] != t[i])
        {
            k++;
        }

        if (k <= j)
        {
            effectif[k]++;
        }
        else
        {
            j++;
            t1[j] = t[i];
            effectif[j] = 1;
        }
    }
    printf("\n******Affichage du tableau après et des effectifs******\n");
    printf("vecteur t1:");
    for (i=0;i<=j;i++)
    {
        printf("%d \t",t1[i]);
    }
    printf("\neffectif:");
    for (i=0;i<=j;i++)
    {
        printf("%d \t",effectif[i]);
    }
    return 0;
}