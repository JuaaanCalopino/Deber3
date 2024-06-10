#include <stdio.h>

// Función para calcular el n-ésimo número triangular
int numeroTriangular(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;

    printf("Ingrese un número para calcular el n-ésimo número triangular: ");
    scanf("%d", &n);

    // Llamada a la función numeroTriangular y mostrar el resultado
    printf("El %d-ésimo número triangular es: %d\n", n, numeroTriangular(n));

    return 0;
}
