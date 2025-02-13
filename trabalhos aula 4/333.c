#include <stdio.h>

int numero, aux;

int main() {
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    aux = numero;

    while (aux > 0) {
        int digito = aux % 10;
        if (digito == 3) {
            printf("O numero %d contem o digito 3.\n", numero);
            return 0;
        }
        aux /= 10; 
    }

    printf("O numero %d nao contem o digito 3.\n", numero);

    return 0;
}
