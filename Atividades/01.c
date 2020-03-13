#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int maqum, maqdois, dias, media;
	float maqtres;
	maqum = 1;
	maqdois = 3;
	maqtres = 2.5;
	printf ("Informe a quantidade de dias:" );
	scanf ("%d", $dias);
	media= (maqum+maqdois+maqtres)*dias;
	printf("A quantidade de postes é: %f \n", media, "em %d dias",dias);
	
	return 0;
}

