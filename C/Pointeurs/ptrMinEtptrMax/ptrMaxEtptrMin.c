#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nb de valeurs réelles à saisir ? ");
    int nb;
    scanf("%d", &nb);
    float *p1;
    p1=(float*)malloc(nb*sizeof(float));
    for (int i = 0; i<nb;i++)
    {
        printf("valeur réelle n°%d: ", i+1);
        scanf("%f", p1 + i);
    }
    printf("************************Affichage de la suite de valeurs réelles saisies************************\n");
    for (int i = 0; i<nb;i++)
    {
        printf("Adresse de valeur réelle n°%d: %p \t valeur réelle n°%d: %.2f\n", i+1, (void*)(p1 + i), i+1, *(p1 + i));
    }
    float *ptrMin=p1, *ptrMax=p1;
    for (int i = 0; i<nb;i++)
    {
        if (*(p1 + i) < *ptrMin)
        {
            ptrMin=p1 + i;
        }
        if (*(p1 + i) > *ptrMax)
        {
            ptrMax=p1 + i;
        }
    }
    printf("************************Affichage des minimum et maximum************************\n");
    printf("contenu de ptrMax: %p \t valeur de la case pointée par ptrMax: %.2f\n", (void*)ptrMax, *ptrMax);
    printf("contenu de ptrMin: %p \t valeur de la case pointée par ptrMin: %.2f\n", (void*)ptrMin, *ptrMin);
    free(p1);
    return 0;
}