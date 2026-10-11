#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double longitud;

    char buffer[50];
    char *endptr;

    printf("Ingresa el valor de la longitud");
    fgets(buffer, 50, stdin);
    longitud = strtol(buffer, &endptr, 10);

    const double perimetro = longitud * 3;
    const double altura = longitud /2 *1.732;
    const double area = longitud * altura /2;

    printf("El perimetro del triángulo es : %lf\n", perimetro);
    printf("La altura del triángulo es : %lf\n", altura);
    printf("El área del triángulo es : %lf\n", area);

    return 0;
}
