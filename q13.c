#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, soma = 0;
    puts("Digite a faixa que você deseja: ");
    scanf("%d %d", &a, &b);

    if (a < b){
        for (int i = a; i <= b; i++){

        if (i % 2 == 0){
            soma = soma + i;
        }
    }

    }

    if (a > b){
        for (int i = b; i <= a; i++){

        if (i % 2 == 0){
            soma = soma + i;
        }
    }


    }
   
    printf("%d\n",soma);




    return 0;
}