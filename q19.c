#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int media = 0;
    int soma = 0;
    int cont = 0;
    puts("Digite a faixa: ");
    scanf("%d %d", &a, &b);
    while (a <= b){
        soma = soma + a;
        a += 1;
        cont += 1;
        
    }

    media = soma / cont;
    printf("Média é %d\n", media);



    return 0;
}