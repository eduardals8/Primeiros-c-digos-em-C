#include <stdio.h>

int main() 
{
    float peso_prato;
    float valor_por_quilo = 45.00;
    float valor_a_pagar;

	printf("Digite o peso do prato em quilos: ");
    scanf("%f", &peso_prato);

    valor_a_pagar = peso_prato * valor_por_quilo;

    printf("O valor a pagar e: R$%f ", valor_a_pagar);

    return 0;
}
