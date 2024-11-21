#include <stdio.h>
#include <string.h>

// Crear un alias para la estructura Estudiante usando typedef
typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;


void probarTiposEstructura() {
    Estudiante estudiante1 = {"Juan Pérez", 20, 8.5};
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);
}
