#include <stdio.h>
int main(){
    int jose, pedro, anos;
    jose = 150;
    pedro = 110;
    anos = 0;
    while (jose > pedro){
        jose = jose + 2;
        pedro = pedro + 3;
        anos += 1;

    }

    printf("Pedro será maior que José em %d anos\nPedro = %dcm\nJosé = %dcm\n",anos, pedro, jose);




    return 0;
}