#include <stdio.h>

int matriz1[3][3],matriz2[3][3],numero,aux;

int main(){

    // recebendo valores para por na matriz
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("Digite um numero para a matriz 1 na posicao [%d] [%d]: ", i,j);
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }

    printf("\n");

    // for para printar a matriz
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    // multiplicando a matriz por 5

    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            aux = matriz1[i][j] * 5;
            matriz2[i][j] = aux; 
        }
    }

    printf("\n");

    for(int i=1; i <= 3; i++){
        for(int j=1; j <= 3; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}