#include <stdio.h>
#include <stdlib.h>

int main(){
    float cels = 10.00;
    float fahren = 0.00;
    while (cels <= 100.00){
        fahren = cels * 1.8 + 32;
        printf("%.1f celsius - %.1f Fahrenheit\n",cels, fahren);
        cels += 10;

    }



    return 0;
}