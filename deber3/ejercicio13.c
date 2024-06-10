#include <stdio.h>

// Función para calcular la suma de los números pares hasta n usando la fórmula
int sumaPares(int n) {
    return n * (n + 1);
}

int main() {
    int n;

    printf("Ingrese un número para calcular la suma de los números pares hasta ese número: ");
    scanf("%d", &n);

    // Llamada a la función sumaPares y mostrar el resultado
    printf("La suma de los números pares hasta %d es: %d\n", n, sumaPares(n));

    return 0;
}
