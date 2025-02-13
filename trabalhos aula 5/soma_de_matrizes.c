#include <stdio.h>

int matriz1[2][3],matriz2[2][3],numero,aux,matriz3[2][3];

int main(){

    // recebendo valores para por na matriz
    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
            printf("Digite um numero para a matriz 1 na posicao [%d] [%d]: ", i,j);
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }

    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
            printf("Digite um numero para a matriz 2 na posicao [%d] [%d]: ", i,j);
            scanf("%d", &numero);
            matriz2[i][j] = numero;
        }
    }

    printf("\n");

    // for para printar a matriz
    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    
    // fazendo a soma de matrizes
    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
        aux = matriz1[i][j] + matriz2[i][j];
        matriz3[i][j] = aux; 
        }
    }

    printf("\n");

    for(int i=1; i <= 2; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}