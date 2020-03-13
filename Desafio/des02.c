#include <stdio.h>
#include <stdlib.h>
int main (){
    int tec;
    float calca, ped;
    printf("Digite o numero de tecidos:\n");
    scanf("%d", &tec);
    calca = (((11.0*15.0)/100.0)*tec)*5;
    printf("Numero de calcas produzidas e: %.2f", calca);

    return 0;
}
