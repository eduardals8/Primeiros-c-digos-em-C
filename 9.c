#include <stdio.h>

int main() 
{
    float raio;
    float diametro, comprimento, area;
	float PI = 3.14;
    
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    diametro = 2 * raio;

    comprimento = 2 * PI * raio;

    area = PI * raio * raio;

    printf("Diametro da circunferencia: %f\n", diametro);
    printf("Comprimento da circunferencia: %f\n", comprimento);
    printf("Area da circunferencia: %f\n", area);

    return 0;
}
