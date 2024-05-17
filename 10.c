#include <stdio.h>

int main() 
{
    int a, b;
    int temp;

    printf("Digite o valor da primeira variavel (a): ");
    scanf("%i", &a);
    printf("Digite o valor da segunda variavel (b): ");
    scanf("%i", &b);

    printf("Valores antes da troca:\n");
    printf("a = %i\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores após a troca:\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);

    return 0;
}
