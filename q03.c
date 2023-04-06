#include <stdio.h>
int main(){
    int F, controle, fatorial;
    fatorial = 1;
    puts("Digite um número pra saber seu fatorial: ");
    scanf("%d", &F);
    for (controle = F; controle > 1; --controle){
        fatorial = fatorial * F;
        F = F - 1;

    }
    
    printf("%d\n",fatorial);


    return 0;
}