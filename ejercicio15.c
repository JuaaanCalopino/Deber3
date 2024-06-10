#include <stdio.h>

// Función para calcular la suma de los cubos de los primeros n números naturales
int sumaCubos(int n) {
    int suma = 0;

    // Iterar desde 1 hasta n y sumar el cubo de cada número
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de los cubos de los primeros n números naturales: ");
    scanf("%d", &n);

    // Llamada a la función sumaCubos y mostrar el resultado
    printf("La suma de los cubos de los primeros %d números naturales es: %d\n", n, sumaCubos(n));

    return 0;
}
