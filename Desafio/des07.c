#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    float pr,vc,cal;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe a quantidade de calorias que vc pretende queimar:\n");
    scanf("%f",&pr);
    printf("Informe o valor calórico gasto por hora da atividade fisica:\n");
    scanf("%f", &vc);
    cal = pr/vc;
    printf("Vc deve realizar %.2f horas de atividades fisicas para perder %.2f calorias", cal, vc);
    return 0;
}
