#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(){
    int a, b, c;
    float delta, x1, x2;
    double complex j = I;
    double complex z1, z2;

    printf("Entrez les coefficients a, b et c de l'équation ax^2 + bx + c = 0: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b*b) - (4*a*c);
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Les solutions sont: x1 = %f, x2 = %f\n", x1, x2);
    }
    if (delta == 0) {
        x1 = -b / (2*a);
        printf("La solution est: x1 = %f\n", x1);
    }
    if (delta < 0) {
        z1 = (-b + j*sqrt(-delta)) / (2*a);
        z2 = (-b - j*sqrt(-delta)) / (2*a);
        printf("Les solutions sont: z1 = %f + %fi, z2 = %f - %fi\n", crealf(z1), cimagf(z1), crealf(z2), cimagf(z2));
    }
    return 0;
}