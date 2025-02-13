#include <stdio.h>

float numero = 0, media, soma = 0, totalDeNumeros = 0;

int main ()
{
    while(numero >= 0){
        numero = 0;
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if(numero > 0){
            soma += numero;
            totalDeNumeros++;
        }else{
            media = soma/totalDeNumeros;
            printf("A media dos seus numeros foi de: %.2f", media);
        }
    }
        return 0;
}
