#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Entrez les longueurs des trois côtés du triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a==b && b==c) {
        printf("Le triangle est équilatéral.\n");
    }
    if (a==b || b==c || a==c) {
        printf("Le triangle est isocèle.\n");
    }
    if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) {
        printf("Le triangle est rectangle.\n");
    } 
    if (a!=b && b!=c && a!=c && a*a!=b*b+c*c && b*b!=a*a+c*c && c*c!=a*a+b*b) {
        printf("Le triangle est quelconque.\n");
    }
    return 0;
}