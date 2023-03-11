#include <stdio.h>
int main(){
    int n;
    puts("Digite um número pra saber qual o dia da semana é p seu correspondente: ");
    scanf("%d", &n);
    while (n > 7){
        puts("Digite um número pra saber qual o dia da semana é p seu correspondente: ");
        scanf("%d", &n);
    }
    switch (n){
        case 1:
            puts("Domingo");
        break;

        case 2:
            puts("Segunda");
        break;
        case 3:
            puts("Terça");
        break;
        case 4:
            puts("Quarta");
        break;
        case 5:
            puts("Quinta");
        break;
        case 6:
            puts("Sexta");
        break;
        case 7:
            puts("Sábado");
        break;

    }



    return 0;
}