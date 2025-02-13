#include <stdio.h>

float numero1, numero2, resultado;

int main()
{
    printf("Digite o primerio numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    resultado = numero1 + numero2;
    printf("Soma : %.2f \n", resultado);    
    resultado = numero1 - numero2;
    printf("Subtracao : %.2f \n", resultado);    
    resultado = numero1 * numero2;
    printf("Multiplicacao : %.2f \n", resultado);    
    resultado = numero1 / numero2;
    printf("Divisao : %.2f \n", resultado);    


    return 0;
}
