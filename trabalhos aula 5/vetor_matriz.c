#include <stdio.h>

int matriz1[3][3],vector[3],matriz2[3][3],numero,aux;

int main(){

    // recebendo valores para por na matriz
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("Digite um numero para a matriz 1 na posicao [%d] [%d]: ", i,j);
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }

    for(int i=1; i <= 3; i++){
        printf("Digite um numero para o vetor na posicao [%d]: ", i);
        scanf("%d", &numero);
        vector[i] = numero;
    }

    printf("\n");

    // fazendo o produto de matrizes
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            aux = matriz1[j][i] * vector[i];
            matriz2[i][j] = aux;
        }
    }

    // for para printar a matriz
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    // for para printar a matriz
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz2[j][i]);
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;
}