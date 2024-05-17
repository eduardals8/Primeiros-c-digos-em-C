#include <stdio.h>

int main ()

{
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int soma;
	
	printf("\nDigite a primeira nota:\n");
	scanf("\n%i", &nota1,"\n");
	printf("\nDigite a segunda nota:\n");
	scanf("\n%i", &nota2,"\n");
	printf("\nDigite a terceira nota:\n");
	scanf("\n%i", &nota3,"\n");
	printf("\nDigite a quarta nota:\n");
	scanf("\n%i", &nota4,"\n");
	
    soma = nota1+nota2+nota3+nota4;
    
	printf("\nO total das notas e %i ", soma);
	
	
	return 0;
}
