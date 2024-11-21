#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Pasar una estructura por valor
void imprimirPorValor(struct Estudiante estudiante) {
    printf("Por Valor - Nombre: %s, Edad: %d, Promedio: %.2f\n",
           estudiante.nombre, estudiante.edad, estudiante.promedio);
}

// Pasar una estructura por referencia
void imprimirPorReferencia(const struct Estudiante *estudiante) {
    printf("Por Referencia - Nombre: %s, Edad: %d, Promedio: %.2f\n",
           estudiante->nombre, estudiante->edad, estudiante->promedio);
}

// Modificar una estructura pasando su dirección
void modificarPorDireccion(struct Estudiante *estudiante) {
    strcpy(estudiante->nombre, "Carlos López");
    estudiante->edad = 25;
    estudiante->promedio = 9.5;
}

// Función que simula lo que hacía main
void probarFuncionesYEstructuras() {
    struct Estudiante estudiante1 = {"Ana García", 22, 8.0};

    // Pasar por valor
    imprimirPorValor(estudiante1);

    // Pasar por referencia
    imprimirPorReferencia(&estudiante1);

    // Modificar pasando por dirección
    modificarPorDireccion(&estudiante1);
    imprimirPorReferencia(&estudiante1);
}
