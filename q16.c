#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma3 = 0;
    int soma5 = 0;
    for (int i = 0; i <= 200; i++){
        if (i < 100 && i % 3 == 0){
            soma3 = i + soma3;
        }

        if (i> 100 && i % 5 == 0){
            soma5 = soma5 + i;
        }
    }

    printf("Somatório dos números divisíveis por 3 é: %d\n",soma3);
    printf("Somatório dos números divisíveis pro 5 é: %d\n",soma5);


    return 0;
}