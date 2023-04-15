#include <stdio.h>

int main(){
    int base = 3; 
    int potencia;
    int resultado;

    printf("Potências de 3:\n");
    for (potencia = 0; potencia <= 7; potencia++) {
        resultado = 1; 
        for (int i = 0; i < potencia; i++) {
            resultado *= base;
        }
        printf("3^%d = %d\n", potencia, resultado);
    }

    return 0;
}