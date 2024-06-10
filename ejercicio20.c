#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial de 0 y 1 es 1
    }

    // Calcular el factorial utilizando un bucle for
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

// Función para calcular la suma de los factoriales de los primeros n números
int sumaFactoriales(int n) {
    int suma = 0;

    // Iterar desde 1 hasta n y sumar el factorial de cada número
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de los factoriales de los primeros n números: ");
    scanf("%d", &n);

    // Llamada a la función sumaFactoriales y mostrar el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, sumaFactoriales(n));

    return 0;
}
