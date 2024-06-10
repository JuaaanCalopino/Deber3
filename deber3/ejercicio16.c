#include <stdio.h>

// Función para calcular la suma de la serie de números fraccionarios
double sumaFraccionarios(int n) {
    double suma = 0.0;

    // Iterar desde 1 hasta n y sumar el inverso de cada número
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de la serie de números fraccionarios: ");
    scanf("%d", &n);

    // Llamada a la función sumaFraccionarios y mostrar el resultado
    printf("La suma de la serie de números fraccionarios hasta %d es: %lf\n", n, sumaFraccionarios(n));

    return 0;
}

