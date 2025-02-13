#include <stdio.h>

char simbolo; 
float numero1, numero2, resultado;

int main(){

    printf("Digite a operacao que deseja: ");
    scanf("%c", &simbolo);
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);


    switch (simbolo){

    case '+':
        resultado = numero1 + numero2;
        printf("O resultado da sua soma e: %.2f", resultado);
    break;
    
    case '-':
        resultado = numero1 - numero2;
        printf("O resultado da sua subtracao e: %.2f", resultado);
    break;

    case '/':
        resultado = numero1 / numero2;
        printf("O resultado da sua divisao e: %.2f", resultado);
    break;

    case '*':
        resultado = numero1 * numero2;
        printf("O resultado da sua multiplicacao e: %.2f", resultado);
    break;
    
    default:
        printf("Voce escolheu uma opcao invalida, o programa sera encerrado!!!");
    break;

    }

    return 0;
}