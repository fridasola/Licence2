#include <stdio.h>
#include <stdlib.h>

int Mult_2 ( int e );
int Mult_3 ( int e );

int main()
{
    int e,mult2,mult3;
    printf("Entrez un entier : ");
    scanf("%d", &e);

    mult2 = Mult_2(e);
    mult3 = Mult_3(e);

    printf("Le nombre %d est multiple de 2 : %s\n", e, mult2 ? "oui" : "non");
    printf("Le nombre %d est multiple de 3 : %s\n", e, mult3 ? "oui" : "non");
    if (mult2 && mult3) {
        printf("Le nombre %d est multiple de 2 et de 3 donc est multiple de 6.\n", e);
    }
    return 0;
}

int Mult_2 ( int e )
{
    return (e % 2 == 0);
}

int Mult_3 ( int e )
{
    return (e % 3 == 0);
}