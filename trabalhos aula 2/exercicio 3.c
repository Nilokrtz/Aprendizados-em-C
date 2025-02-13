#include <stdio.h>

float numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    numero = numero/4;

    printf("Um quarto do numero que voce escolheu e: %.2f",numero);

    return 0;
}
