#include <stdio.h>

int main() 
{
    int nb1,nb2,nb;
    char entree;
    char exit = 0;
    while(exit == 0)
    {
        printf("Addition\tA\nSoustractino\tS\nMultiplication\tM\nDivision\tD\nQuitter\tQ\nVotre choix: ");
        nb=scanf("%s",&entree);

        if (entree == 'Q') 
        {
            exit = 1;
        }else
        {
            printf("Entrez deux nombres entiers: ");
            fflush(stdout);
            scanf("%d %d",&nb1,&nb2);
            fflush(stdin);
        }
        
        switch (entree)
        {
            case 'A':
                printf("Résultat: %d\n", nb2 + nb1);
                break;
            case 'S':
                printf("Résultat: %u\n", nb2 - nb1);
                break;
            case 'M':
                printf("Résultat: %d\n", nb2 * nb1);
                break;
            case 'D':
                if (nb1 != 0) {
                    printf("Résultat: %.2f\n", (float)(nb2) / nb1);
                } else {
                    printf("Erreur: Division par zéro!\n");
                }
                break;
            case 'Q':
                printf("Au revoir!\n");
                break;
    
            default:
                printf("Choix invalide!\n");
                break;
        }
    }
    return 0;
}