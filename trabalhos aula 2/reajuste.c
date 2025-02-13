#include <stdio.h>

float saldo;

int main()
{
    printf("Digite o saldo de sua conta: ");
    scanf("%f", &saldo);
    saldo += saldo * 0.02;
    printf("Seu saldo foi reajustado para: %.2f ", saldo);
    
    
    return 0;
}
