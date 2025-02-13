#include <stdio.h>

int numero;

int main(){

    printf("Digite um numero: ");
    scanf("%i" , &numero);

    if (numero % 2 == 0){
        printf("Seu numero e par");
    }
    else{
        printf("Seu numero e impar");
    }
    
    return 0;
}