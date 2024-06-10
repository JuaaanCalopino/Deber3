#include <stdio.h>

// Función para calcular la suma de los cuadrados de los primeros n números naturales
int sumaCuadrados(int n) {
    int suma = 0;

    // Iterar desde 1 hasta n y sumar el cuadrado de cada número
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de los cuadrados de los primeros n números naturales: ");
    scanf("%d", &n);

    // Llamada a la función sumaCuadrados y mostrar el resultado
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, sumaCuadrados(n));

    return 0;
}
