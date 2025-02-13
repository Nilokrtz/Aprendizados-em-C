#include <stdio.h>

float numero1, numero2, numero3, media;

int main()
{
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;
    printf("A media dos seus numeros foi de: %.2f", media);

    return 0;
}
