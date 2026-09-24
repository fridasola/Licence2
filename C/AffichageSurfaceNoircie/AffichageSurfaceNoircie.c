
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

double x = M_PI;

int main()
{
    printf("Bonjour, ce programme calcule l'air de la surface noircie d'un carré de coté 'valeur' et d'un cercle inscrit dans ce carré.\n");
    int valeur,nb;
    float AirCarree,AirCercle,AirNoircie;
    printf("Saisissez la valeur du coté du carée : ");
    nb=scanf("%d",&valeur);
    printf("/*****nombre de données lues:%d\n",nb);

    AirCarree=valeur*valeur;
    printf("L'air du carré vaut : %4.2f\n",AirCarree);
    AirCercle=x*((valeur/(float)2))*((valeur/(float)2));
    printf("pi vaut : %4.2f\n",x);
    printf("L'air du cercle vaut : %4.2f\n",AirCercle);
    AirNoircie=AirCarree-AirCercle;
    printf("L'air de la surface noircie vaut : %4.2f\n",AirNoircie);
    return 0;
}