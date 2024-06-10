#include <stdio.h>

// Función para encontrar el MCD de dos números
int encontrarMCD(int num1, int num2) {
    int mcd;

    // Utilizamos el algoritmo de Euclides para encontrar el MCD
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    mcd = num1;
    return mcd;
}

int main() {
    int num1, num2;

    printf("Ingrese dos numeros para encontrar el MCD:\n");
    scanf("%d %d", &num1, &num2);

    // Llamada a la función encontrarMCD y mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", num1, num2, encontrarMCD(num1, num2));

    return 0;
}
