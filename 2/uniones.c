#include <stdio.h>
#include <string.h>

union Datos {
    int entero;
    float flotante;
    char cadena[50];
};

void probarUniones() {
    union Datos dato;

    dato.entero = 10;
    printf("Entero: %d\n", dato.entero);

    dato.flotante = 3.14;
    printf("Flotante: %.2f\n", dato.flotante);

    strcpy(dato.cadena, "Hola, mundo");
    printf("Cadena: %s\n", dato.cadena);
}

