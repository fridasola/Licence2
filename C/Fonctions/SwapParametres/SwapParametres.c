#include <stdio.h>
#include <stdlib.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Paramètres après l'échange : x = %d, y = %d\n", *x, *y);

}

int main()
{
    int param1, param2;
    printf("Entrez la valeur du premier paramètre : ");
    scanf("%d", &param1);
    printf("Entrez la valeur du deuxième paramètre : ");
    scanf("%d", &param2);
    printf("Paramètres avant l'échange : x = %d, y = %d\n", param1, param2);
    Swap(&param1, &param2);
    return EXIT_SUCCESS;
}
