#include <stdio.h>

int numero1, numero2, aux, resto, quociente, valor1;

int main(){

    printf("Digite o primeiro numero: ");
    scanf("%d" , &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d" , &numero2);
    valor1 = numero1;

    for(quociente = 0; numero1 > numero2 ;quociente++ ){
        aux = numero1 - numero2;
        numero1 = aux;
        if(aux<numero2){
            resto = aux;
        }
    }

    printf("A divisao dos numeros %d e %d, resultou em um quociente de %d e de um resto de %d.", valor1,numero2,quociente,resto);

    return 0;
}