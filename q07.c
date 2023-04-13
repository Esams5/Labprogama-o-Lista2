#include <stdio.h>
int main(){
    int num2;
    float num1,divisao;
    puts("Digite dois números: ");
    scanf("%f %d",&num1, &num2);
    while (num2 == 0){
        puts("Número inválido digite o segundo número novamente: ");
        scanf("%d",&num2);
    }


    divisao = num1 / num2;

    printf("%.2f\n", divisao);




    return 0;
}