#include <stdio.h>
#include <stdlib.h>

int main(){


    puts("Abaixo os quadrados dos múltiplos de 4");

    for (int i = 15; i < 90; i++){

        if (i % 4 == 0){
            printf("O quadrado de %d é %d\n",i, i*i);
        }
    }





    return 0;
}