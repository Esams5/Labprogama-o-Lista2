#include <stdio.h>

int main() {
    float valorMercadoria, veri;
    float entrada = 0.00, prestacao1 = 0.00, prestacao2 = 0.00;
    
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);

    veri = (int)valorMercadoria % 3;

    if ( veri == 0){
        entrada = valorMercadoria / 3;
        prestacao1 = valorMercadoria / 3;
        prestacao2 = valorMercadoria / 3;
    }

    else{
        prestacao1 = (int)(valorMercadoria / 3);
        prestacao2 = (int)(valorMercadoria / 3);
        entrada = valorMercadoria- (prestacao1 + prestacao2);
    }





    printf("Entrada: %.2f\nPrestação 1:%.2f\nPrestação 2:%.2f\n", entrada, prestacao1, prestacao2);
 
    
    return 0;
}
