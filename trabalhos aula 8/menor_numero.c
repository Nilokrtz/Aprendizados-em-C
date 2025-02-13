#include <stdio.h>

int menor, valor1, valor2;

int MenorNumero(valor1, valor2){

    if(valor1 > valor2){
        menor = valor2;
    }
    else{
        menor = valor1;
    }

    return menor;
}

int main()
{

    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor2);
    MenorNumero(valor1,valor2);

    printf("O menor valor e: %i\n", menor);

    return 0;
}
