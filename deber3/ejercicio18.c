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

// Función para contar los números primos hasta n
int contarPrimosHastaN(int n) {
    int contador = 0;

    // Iterar desde 1 hasta n y contar los números primos
    for (int i = 1; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int n;

    printf("Ingrese un número para contar los números primos hasta ese número: ");
    scanf("%d", &n);

    // Llamada a la función contarPrimosHastaN y mostrar el resultado
    printf("Hay %d números primos hasta %d.\n", contarPrimosHastaN(n), n);

    return 0;
}
