#include <stdio.h>

// Funcion para calcular la suma de los dgitos de un número
int sumaDigitos(int num) {
    int suma = 0;
    //bucle
    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
   //resultado
    printf("La suma de los dígitos de %d es: %d\n", numero, sumaDigitos(numero));

    return 0;
}
