#include <stdio.h>

// Declaraciones de funciones de otros archivos

void probarUniones();
void probarCopiaEstructuras();
void probarTiposEstructura();
void probarFuncionesYEstructuras();

int main() {
    printf("Probando estudiantes:\n");


    printf("\nProbando uniones:\n");
    probarUniones();

    printf("\nProbando copia de estructuras:\n");
    probarCopiaEstructuras();

    printf("\nProbando typedef y tipos de estructuras:\n");
    probarTiposEstructura();

    printf("\nProbando funciones y estructuras:\n");
    probarFuncionesYEstructuras();

    return 0;
}
