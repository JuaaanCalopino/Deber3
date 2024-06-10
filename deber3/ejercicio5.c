#include <stdio.h>

// Funcion para calcular el termino n de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i = 0;
    
    printf("Ingrese los numeros de terminos que quieres : ");
    scanf("%d", &n);
    
    printf("La serie de Fibonacci con %d terminos es:\n", n);
    
    while (i < n) {
        printf("%d ", fibonacci(i));
        i++;
    }
    
    printf("\n");
    
    return 0;
}
