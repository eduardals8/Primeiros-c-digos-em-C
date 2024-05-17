#include <stdio.h>

int main ()

{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	printf("\nDigite a primeira nota:\n");
	scanf("\n%f", &nota1,"\n");
	printf("\nDigite a segunda nota:\n");
	scanf("\n%f", &nota2,"\n");
	printf("\nDigite a terceira nota:\n");
	scanf("\n%f", &nota3,"\n");
	printf("\nDigite a quarta nota:\n");
	scanf("\n%f", &nota4,"\n");
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("\nA media das notas e %f ", media);
	
	return 0;
}
