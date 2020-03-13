#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float cal, per1, per2, per3;
    printf("Escreva o comprimento da base:\n");
    printf("Escreva o comprimento da aresta direita:\n");
    printf("Escreva o comprimento da aresta esquerda:\n");
    scanf("%f %f %f",&per1,&per2,&per3);
    cal=(per1+per2+per3);
    printf("O perimetro do triangulo e: %f", cal);
    return 0;
}
