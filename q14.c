#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, quant;
    quant = 0;
    
    puts("Digite a faixa que você deseja: ");
    scanf("%d %d", &a, &b);
    printf("Números divisiveis:\n");

    if (a < b){
        for (int i = a; i <= b; i++){

        if (i % 3 == 0){
            quant += 1;
            printf("%d\n", i);
        }
    }

    }

    if (a > b){
        for (int i = b; i <= a; i++){

        if (i % 3 == 0){
            quant += 1;
            printf("%d\n", i);
        }
    }

    }

    printf("A quantida de números divisiveis por 3 na faixa de %d-%d é %d\n",a, b, quant);



    return 0;
}