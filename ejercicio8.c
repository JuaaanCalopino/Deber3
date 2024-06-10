#include <stdio.h>

// Función para calcular el producto de una serie geométrica
float productoGeometrico(int n, float r) {
    float producto = 1;
    for (int i = 0; i < n; ++i) {
        producto *= r;
    }
    return producto;
}

int main() {
    int n;
    float r;

    printf("Ingrese el valor de n para la serie geométrica: ");
    scanf("%d", &n);
    printf("Ingrese el valor de la razón (r) de la serie geométrica: ");
    scanf("%f", &r);
    printf("El producto de los primeros %d términos de la serie geométrica es: %.2f\n", n, productoGeometrico(n, r));

    return 0;
}
