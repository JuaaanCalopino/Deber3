#include <stdio.h>

// Función para calcular la suma de los números impares hasta n
int sumaImpares(int n) {
    int suma = 0;

    // Iterar sobre todos los números desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        // Si el número es impar, añadirlo a la suma
        if (i % 2 != 0) {
            suma += i;
        }
    }

    return suma;
}

int main() {
    int n;

    printf("Ingrese un numero para calcular la suma de los numeros impares hasta ese numero: ");
    scanf("%d", &n);

    // Llamada a la función sumaImpares y mostrar el resultado
    printf("La suma de los numeros impares hasta %d es: %d\n", n, sumaImpares(n));

    return 0;
}
