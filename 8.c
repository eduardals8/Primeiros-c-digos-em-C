#include <stdio.h>

int main() 
{
    float temp_fahrenheit;
    float temp_celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temp_fahrenheit);

    temp_celsius = (temp_fahrenheit - 32) / 1.8;

    printf("\nA temperatura em Fahrenheit e: %f ", temp_fahrenheit);
    printf("\nA temperatura em Celsius e: %f ", temp_celsius);

    return 0;
}
