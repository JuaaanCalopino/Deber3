#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    int i = 0;

    if (exponente == 0)
        return 1;

    do {
        resultado *= base;
        i++;
    } while (i < exponente);

    return resultado;
}

int main() {
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = potencia(base, exponente);

    printf("%d elevado a la %d es igual a %d\n", base, exponente, resultado);

    return 0;
}
