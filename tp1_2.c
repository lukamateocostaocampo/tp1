// Punto 5
#include <stdio.h>

// a) Haga una función que devuelva el cuadrado de un número
int cuadrado(int num) {
    int resultado;
    resultado = num * num;
    return resultado;
}
// b) Haga la función anterior, pero devolviendo un tipo void
void cuadradoVoid (int *num) {
    *num *= *num;
}

// c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable

/* esto en realidad va a mostrar la dirección de memoria de la variable temporal utilizada en la función. Por las dudas,
dejo una opción en la que se pasa el parámetro por referencia y se muestra la dirección original. */
void mostrarVariablePorValor (int var) {
    printf("\nDirección de la variable: %p", &var);
    printf("\nContenido de la variable: %d", var);
}

void mostrarVariablePorRef (int *var) {
    printf("\nDirección de la variable: %p", var);
    printf("\nContenido de la variable: %d", *var);
}

// d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void invertir(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

// e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden (int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

// f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla
int main () {

    int numero1 = 40, numero2 = 25;
    printf("Cuadrado de %d: %d",numero1, cuadrado(numero1));
    mostrarVariablePorRef(&numero2);
    printf("\nNumero 1: %d -------- Numero 2: %d", numero1, numero2);
    printf("\n----- Ordenamos (de menor a mayor) -----");
    orden(&numero1,&numero2);
    printf("\nNumero 1: %d -------- Numero 2: %d", numero1, numero2);
    invertir(&numero1,&numero2);
    printf("\n----- Inversion -----");
    printf("\nNumero 1: %d -------- Numero 2: %d", numero1, numero2);


    return 0;
}
