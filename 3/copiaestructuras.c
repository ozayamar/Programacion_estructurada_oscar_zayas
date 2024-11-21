#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Función para copiar una estructura Estudiante
struct Estudiante copiarEstructura(struct Estudiante estudiante) {
    return estudiante;
}


void probarCopiaEstructuras() {
    struct Estudiante estudiante1 = {"Juan Pérez", 20, 8.5};
    struct Estudiante copia = copiarEstructura(estudiante1);

    printf("Copia - Nombre: %s\nEdad: %d\nPromedio: %.2f\n", copia.nombre, copia.edad, copia.promedio);
}
