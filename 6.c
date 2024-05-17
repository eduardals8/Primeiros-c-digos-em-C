#include <stdio.h>

int main() 
{
    float peso_kg;
    float peso_g;

    printf("Digite o peso da pessoa em quilos: ");
    scanf("%f", &peso_kg);

    peso_g = peso_kg * 1000;

    printf("O peso da pessoa em gramas e: %f ", peso_g);

    return 0;
}
