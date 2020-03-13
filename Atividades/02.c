#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float media, n1, n2, n3, p1,p2,p3;
    printf("Informe a nota 01:");
    scanf("%f", &n1);
    printf("Informe a nota 02:");
    scanf("%f", &n2);
    printf("Informe a nota 03:");
    scanf("%f", &n3);
    media = ((n1+n2+n3)/3);
    printf("Media %f", media);
    return 0;
}
