#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, dezena, centena, unidade, unimilhar, dezemilhar;
    puts("Escreva um número de 5 dígitos: ");
    scanf("%d", &n);
    dezemilhar = n / 10000;
    unimilhar = (n%10000) / 1000;
    centena = ((n%10000) / 100 ) % 10;
    dezena = ((n%10000) / 10) % 10 ;
    unidade = n % 10;
    
    // outra forma de fazer!
    //dig1 = num / 10000;
    //dig2 = (num / 1000) % 10;
    //dig4 = (num / 10) % 10;
    //dig5 = num % 10;


    printf("%d%d%d%d%d\n",unidade, dezena,centena,unimilhar,dezemilhar);
    
    if (dezemilhar == unidade && unimilhar == dezena){
        printf("É um palídromo!\n");
    }
    else{
        printf("Não é palídromo!\n");
    }

    return 0;

}