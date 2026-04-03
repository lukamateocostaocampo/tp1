#include <stdio.h>


int main () {
    printf("Hola Mundo");

    int *puntero;
    int numero = 56;

    puntero = &numero;
    // 1) El contenido del puntero
    printf("contenido del puntero: %d", *puntero);
    // 2) La dirección de memoria almacenada por el puntero.
    printf("\nDireccion de memoria almacenada por el puntero: %p", puntero);
    // 3) la dirección de memoria de la variable.
    printf("\nDireccion de memoria de la variable: %p", &numero);
    // 4) la dirección de memoria del puntero.
    printf("\nDireccion de memoria del puntero: %p", &puntero);
    // 5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("\nTamaño de memoria utilizado por la variable 'numero': %d", sizeof(numero));

    return 0;
}