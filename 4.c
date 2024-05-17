#include <stdio.h>

int main ()

{
	int valor1;
	int valor2;
	int diferenca;
	
	printf("\nDigite o primeiro valor\n");
	scanf("\n%i",&valor1,"\n");
	printf("\nDigite o segundo valor\n");
	scanf("\n%i",&valor2,"\n");
	
	diferenca = valor1 - valor2;
	
	printf("\nA diferenca entre os dois numeros e %i",diferenca);

return 0;
}
