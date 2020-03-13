#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float hs,hv,ht,ad,des;
    printf("Para se calcular o valor do sálario bruto deve-se informar \n As horas trabalhadas + o valor que ganha por hora, segue exemplo.\n");
    printf("Informe a quantidade de horas trabalhadas:");
    scanf("%f", &hs);
    printf("Informe o valor da hora:");
    scanf("%f", &hv);
    ht=hs*hv;
    printf("Foi declarado duas várias que conforme solicitado é informado a hora trabalhadas (hs) + valor da hora (hv) \n Com esses valor obteve o valor bruto que é o ht (hs*hv):',ht \n");
    printf("Mas para obtever o salário liquido deve se dar os descontos do INSS que é de 8%% e 12%% de imposto de renda por cima do salario menos os adiantamentos \n");
    printf("Dessa forma é declada a variavel desconto (des) que é pego o salário menos todos os descontos \n");
    printf("Tambem deve se informar o total de adiantamentos em uma variavel para armazenar o valor sendo assim a (ad)\n \n");
    printf("Informe o total de adiantamentos feito para esse funcionários(caso n tenha adiantamento informe 0):");
    scanf("%f",&ad);
    des =ht-((ht*12)/100);
    printf("Calculo efetuado para calcular salario liquido ((ht*12)\100)-ht\n");
    printf("Salário liquido é:%.2f \n Dessa forma vc sabera o salario liquido e bruto do funcionários \n Salario Bruto: %.2f \n Salario liquido: %.2f",des,ht,des);
    return 0;
}
