#include <stdio.h>

// Función para calcular la suma de una serie aritmética
int sumaAritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese el valor de n para la serie aritmética: ");
    scanf("%d", &n);
    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, sumaAritmetica(n));

    return 0;
}
