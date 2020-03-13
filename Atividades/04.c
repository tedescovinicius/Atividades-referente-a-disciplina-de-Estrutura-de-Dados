#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float n1,n2, soma;
    printf("Digite um numero a ser somado:");
    scanf("%f", &n1);
    printf("Digite por qual numero vc quer que seja somado:");
    scanf("%f", &n2);
    soma = n1+n2;
    printf ("Soma: %.2f",soma);
    return 0;
}
