#include <stdio.h>


int LerNumeroPositivo() {
    int numero;
    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
        if (numero <= 0) {
            printf("O numero deve ser positivo. Tente novamente.\n");
        }
    } while (numero <= 0); 
    return numero;
}


int SomaDivisores(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) { 
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numeros[5];
    
    printf("Digite 5 numeros inteiros positivos:\n");
    for (int i = 0; i < 5; i++) {
        numeros[i] = LerNumeroPositivo();
    }

    
    printf("\nSoma dos divisores:\n");
    for (int i = 0; i < 5; i++) {
        int soma = SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %d e %d\n", numeros[i], soma);
    }

    return 0;
}
