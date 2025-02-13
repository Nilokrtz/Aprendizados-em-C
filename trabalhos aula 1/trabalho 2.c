#include <stdio.h>

char operacao;
float numero1, numero2, resultado;

int main ()
{
    printf("Digite o primeiro numero que deseja calcular: ");  
    scanf("%f", &numero1);
    
    printf("Digite o segundo numero que deseja calcular: ");  
    scanf("%f", &numero2);
    
    getchar();  
    
    printf("Digite qual operacao deseja utilizar (+, -, / ou *): ");
    scanf("%c", &operacao);  

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        default:
            printf("Voce nao escolheu uma operacao valida.\n");
            return 1;  
    }
    
    printf("Seu resultado foi: %.1f\n", resultado);
    return 0;
}
