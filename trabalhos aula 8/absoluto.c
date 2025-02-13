#include <stdio.h>

int Absoluto(int numero) {

    if(numero <0){
        return -numero;
    }
    else{
        return numero;
    }
}

int main() {
    int numeros[5];

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("O valor absoluto de %d e %d\n", numeros[i], Absoluto(numeros[i]));
    }

    return 0;
}
