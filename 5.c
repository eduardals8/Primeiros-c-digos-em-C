#include <stdio.h>

int main() 

{
    float num1, num2, result;

    
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

	result = num1 / num2;

    printf("O resultado da divisao e %f ", result);

    return 0;
}
