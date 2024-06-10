#include <stdio.h>

// Funcion para contar los dígitos de un número
int contarDigitos(int numero) {
    int contador = 0;
    
    // Bucle para contar los dígitos
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    
    return contador;
}

int main() {
    int numero;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Llamada a la funcion contarDigitos y mostrar el resultado
    printf("El numero de digitos en %d es: %d\n", numero, contarDigitos(numero));
    
    return 0;
}
