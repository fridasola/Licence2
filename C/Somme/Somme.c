#include <stdio.h>

int main() 
{
    int somme=0,produit=1;
    float moyenne;
    printf("Combien de nombres voulez-vous entrer? ");
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        int nombre;
        printf("Entrez le nombre %d: ",i+1);
        scanf("%d",&nombre);
        somme+=nombre;
        produit*=nombre;
    }
    moyenne = (float)somme / n;
    printf("Somme: %d\n", somme);
    printf("Produit: %d\n", produit);
    printf("Moyenne: %.2f\n", moyenne);
    return 0;
}