#include <stdio.h>
#include <stdlib.h>
int main(){
    int dias;
    float media;
    printf("Informe a quantidade de dias:");
    scanf("%d", &dias);
    media = dias*5.5;
    /*printf("%f \n",media);*/
    printf("Quantidade de dias  : %d  ",dias);
    printf("para produzir %f  postes  \n",media);

    return 0;
}
