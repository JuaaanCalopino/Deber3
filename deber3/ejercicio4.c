#include <stdio.h>

float raizCubica(float num) {
    float raiz = 0.0;
    float incremento = 0.001; // Incremento para ir probando valores
    
    while (raiz * raiz * raiz < num) {
        raiz += incremento; // Aumentamos el valor de la raíz
    }
    
    
    while (raiz * raiz * raiz > num) {
        raiz -= incremento;
    }
    
    return raiz;
}

int main() {
    float num, resultado;
    
    printf("Ingrese un numero:  ");
    scanf("%f", &num);
    
    resultado = raizCubica(num);
    
    printf("La raiz cubica de %.2f es aproximadamente: %.2f\n", num, resultado);
    
    return 0;
}
