#include <stdio.h>

int main() {
    int numero;

    
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    int factorial = 1;

    // Calcular el factorial utilizando un bucle for
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    // Mostrar el resultado del factorial
    printf("El resultado es: %d\n", factorial);

    return 0;
    
}