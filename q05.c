#include <stdio.h>
int main(){
    int maior, menor, n;
    puts("Digite um número: ");
    scanf("%d",&n);
    maior = n;
    menor = n;
    while (n != 0){
        puts("Digite um número: ");
        scanf("%d",&n);
        if ( n > maior){
            maior = n;
        }
        else if (n < menor && n != 0){
            menor = n;
        }

    }
    printf("%d é o maior valor\n%d é o Menor valor\n", maior, menor);





    return 0;
}