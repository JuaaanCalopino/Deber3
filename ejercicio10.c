#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números menores o iguales a 1 no son primos
    }

    // Comprobamos si el número es divisible por algún número entre 2 y la mitad de sí mismo
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // Si es divisible, no es primo
        }
    }

    return true; // Si no es divisible por ningún número, es primo
}

int main() {
    int numero;

    printf("Ingrese un numero para verificar si es primo: ");
    scanf("%d", &numero);

    // Llamada a la función esPrimo y mostrar el resultado
    if (esPrimo(numero)) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
