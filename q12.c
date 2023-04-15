#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    puts("Digite um número: ");
    
    scanf("%d",&num);
    
    puts("Tabuada");

    for (int i = 0; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }





    return 0;
}