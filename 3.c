#include <stdio.h>

int main ()

{
	int base;
	int altura;
	int area;
	
	printf("\nInsira a medida da base do retangulo\n");
	scanf("\n%i", &base,"\n");
	printf("\nInsira a medida da altura do retangulo\n");
	scanf("\n%i", &altura,"\n");
	
	area = base * altura;
	
	printf("\nA area do retangulo em metros quadrados e %i ", area);
	
	return 0;
}
