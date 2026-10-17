#include <stdio.h>
#define TAILLE 30

int main()
{
    int nb,t[TAILLE],i;
    do
    {
        printf("Rentrez le nombre d'éléments à saisir (nb <= %d):", TAILLE);
        scanf("%d",&nb);
        fflush(stdin);
    }
    while(nb <= 0 || nb > TAILLE);
    for(i=0;i<nb;i++)
    {
        printf("Entrer t[%d]:",i);
        scanf("%d",&t[i]);
        fflush(stdin);
    }
    printf("******Affichage du tableau initial ******\n");
    printf("vecteur t: ");
    for(i=0;i<nb;i++)
    {
        printf("%d \t",t[i]);
    }
    printf("\n******Affichage du tableau après inversion ******\n");
    printf("vecteur t inversé: ");
    for(i=nb-1;i>=0;i--)
    {
        printf("%d \t",t[i]);
    }
}