#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float car, vel, imptex;
    printf("Informe a quantidade de caracteres no texto:\n");
    scanf("%f",&car);
    printf ("Informe a velocidade de impressao:\n");
    scanf("%f",&vel);
    imptex=car/vel;
    printf("Demora %.2f minuto(s) para imprimir %.2f caracteres", imptex ,car);
    return 0;
}
