#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    puts("Digite a faixa que você deseja: ");
    scanf("%d %d", &a, &b);

    if (a < b){
        for (int i = a; i <= b; i++){

        if (i % 4 == 0){
            printf("O quadrado de %d é %d\n",i, i*i);
        }
    }

    }

    if (a > b){
        for (int i = b; i <= a; i++){

        if (i % 4 == 0){
            printf("O quadrado de %d é %d\n",i, i*i);
        }
    }

    }



    return 0;
}