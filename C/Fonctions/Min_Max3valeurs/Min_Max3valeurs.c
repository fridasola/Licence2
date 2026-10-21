#include <stdio.h>
#include <stdlib.h>

void Min_Max(int a, int b, int c, int *min, int *max) 
{
    *min = a;
    *max = a;

    if (b < *min) {
        *min = b;
    }
    if (b > *max) {
        *max = b;
    }

    if (c < *min) {
        *min = c;
    }
    if (c > *max) {
        *max = c;
    }

    return 0;
}

int main() 
{
    int a, b, c;
    int min, max;

    printf("Entrez trois valeurs entières : ");
    scanf("%d %d %d", &a, &b, &c);

    Min_Max(a, b, c, &min, &max);

    printf("La valeur minimale est : %d\n", min);
    printf("La valeur maximale est : %d\n", max);

    return EXIT_SUCCESS;
}