#include <stdio.h>

int main(){
    int principal, anterior, soma;
    principal = 1;
    anterior = 0;
    soma = 1;
    for (int i = 0; i < 20; i++){
        printf("%d\n",soma);
        soma = principal + anterior;
        anterior = principal;
        principal = soma;
    }



    return 0;
}