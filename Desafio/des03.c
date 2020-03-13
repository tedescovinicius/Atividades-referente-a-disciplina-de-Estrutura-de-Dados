#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float cal, gr;
    printf ("Informe as gramas de algodao:");
    scanf ("%f", &gr);
    cal= (gr/99.5)+0.5;
    printf("Conforme as %.2f de algodao informada vc consegue produzir %.2f camisas", gr,cal);

    return 0;
}
