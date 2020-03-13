#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float n, ns, na;
    printf ("Informe um numero:");
    scanf("%f",&n);
    na = (n+1);
    ns = (n-2);
    printf (" Antecessor: %f \n Sucessor: %f \n ", na,ns);
    return 0;
}
