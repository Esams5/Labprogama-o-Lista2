#include <stdio.h>

int main() {
    long long int soma = 0;
    long long int graos = 1;

    
    for (int i = 1; i <= 64; i++) {
        soma += graos; 
        graos *= 2;
    }

    printf("O total de grãos de trigo no tabuleiro é: %lld\n", soma); // overflow   

    return 0;
}