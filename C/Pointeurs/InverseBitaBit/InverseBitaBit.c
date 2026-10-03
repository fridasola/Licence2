#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p, n;
    printf("Entrez un nombre entier: ");
    scanf("%d*c", &x);
    printf("Entrez à partir de quelle position faut il inverser: ");
    scanf("%d*c", &p);
    printf("Entrez le nombre de bits à inverser: ");
    scanf("%d*c", &n);
    printf("Le nombre %d en binaire est: ", x);
    char binary[9];
    binary[8] = '\0';
    for (int i = 7; i >= 0; i--)
    {
        binary[7 - i] = ((x >> i) & 1) + '0';
    }
    printf("%s", binary);
    printf("\n");
    for (int i = p; i > p - n; i--)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else
        {
            binary[i] = '0';
        }
    }
    printf("Le nombre après inversion est: %s\n", binary);
    int nouveau_nombre = 0;
    for (int i = 0; i < 8; i++)
    {
        if (binary[i] == '1')
        {
            nouveau_nombre += (1 << (7 - i));
        }
    }
    printf("Le nouveau nombre est: %d", nouveau_nombre);
    return 0;
}