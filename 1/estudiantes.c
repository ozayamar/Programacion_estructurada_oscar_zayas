#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Variables globales para el manejo de listas
#define MAX_ESTUDIANTES 100
struct Estudiante lista[MAX_ESTUDIANTES];
int contador = 0;

// Función para agregar un estudiante a la lista
void agregarEstudiante(char nombre[], int edad, float promedio) {
    if (contador < MAX_ESTUDIANTES) {
        strcpy(lista[contador].nombre, nombre);
        lista[contador].edad = edad;
        lista[contador].promedio = promedio;
        contador++;
    } else {
        printf("Error: No se pueden agregar más estudiantes, lista llena.\n");
    }
}

// Función para mostrar los estudiantes en la lista
void verEstudiantes() {
    for (int i = 0; i < contador; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("  Nombre: %s\n  Edad: %d\n  Promedio: %.2f\n", lista[i].nombre, lista[i].edad, lista[i].promedio);
    }
}

// Función para eliminar el último estudiante de la lista
void eliminarUltimoEstudiante() {
    if (contador > 0) {
        contador--;
        printf("Último estudiante eliminado.\n");
    } else {
        printf("No hay estudiantes en la lista.\n");
    }
}

// Ejemplo 1: Instancia directa de estructura
void ejemplo1() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan Pérez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    printf("Ejemplo 1:\n");
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);
}

// Ejemplo 2: Instancia con malloc (si decides mantener esta parte)
void ejemplo2() {
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    if (estudiante2 != NULL) {
        strcpy(estudiante2->nombre, "Ana García");
        estudiante2->edad = 22;
        estudiante2->promedio = 9.0;

        printf("Ejemplo 2:\n");
        printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n\n", estudiante2->nombre, estudiante2->edad, estudiante2->promedio);

        free(estudiante2); // Liberar la memoria
    } else {
        printf("Error al asignar memoria para estudiante2.\n");
    }
}

// Ejemplo 3: Uso de punteros y estructuras
void ejemplo3() {
    struct Estudiante estudiante3 = {"Carlos López", 21, 7.8};
    struct Estudiante *ptrEstudiante = &estudiante3;

    printf("Ejemplo 3:\n");
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n\n", ptrEstudiante->nombre, ptrEstudiante->edad, ptrEstudiante->promedio);
}

// Ejemplo 4: Manejo de una lista de estudiantes
void ejemplo4() {
    printf("Ejemplo 4:\n");
    agregarEstudiante("Juan Pérez", 20, 8.5);
    agregarEstudiante("Ana García", 22, 9.0);
    verEstudiantes();
    eliminarUltimoEstudiante();
    verEstudiantes();
}
