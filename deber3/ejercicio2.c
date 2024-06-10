#include <stdio.h>

int invertirNumero(int numero) {
    int inverso = 0;
    while(numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}

int main() {
    int num;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    
    int inverso = invertirNumero(num);
    printf("El inverso de %d es: %d\n", num, inverso);
    
    return 0;
}
