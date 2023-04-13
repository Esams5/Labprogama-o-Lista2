#include <stdio.h>
int main(){
    int paulo, renata, branco, nulo, voto, cont;
    paulo = renata = branco = nulo = voto =  0;
    while ( voto >= 0){
        puts("Digite seu voto, 5 para Paulo e 7 para Renta: ");
        scanf("%d", &voto);
        if (voto == 5){
            paulo += 1;
        }
        else if (voto == 7){
            renata += 1;
        }
        else if (voto == 0){
            branco += 1;
        }
        else{
            nulo += 1;
        }
    }


    printf("Paulo: %d\nRenata: %d\nBranco: %d\nNulo: %d\n",paulo,renata,branco,nulo-1);




    return 0;


}