#include <stdio.h>

// Función para calcular el producto de la serie de números fraccionarios
double productoFraccionarios(int n) {
    double producto = 1.0;

    // Iterar desde 1 hasta n y multiplicar el inverso de cada número
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    return producto;
}

int main() {
    int n;

    printf("Ingrese un número para calcular el producto de la serie de números fraccionarios: ");
    scanf("%d", &n);

    // Llamada a la función productoFraccionarios y mostrar el resultado
    printf("El producto de la serie de números fraccionarios hasta %d es: %lf\n", n, productoFraccionarios(n));

    return 0;
}
