#include <stdio.h>

int matriz1[4][4],numero, maior=0,linha =0, coluna =0;

int main(){

for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("Digite um numero para a matriz 1 na posicao [%d] [%d]: ", i,j);
            scanf("%d", &numero);
            matriz1[i][j] = numero;
        }
    }


    //verificação do maior numero
    
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if(matriz1[i][j] > maior){
                maior = matriz1[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    
    printf("\n");

    // for para printar a matriz
    for(int i=1; i <= 4; i++){
        for(int j=1; j <= 4; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nO maior numero e: %d.\nE esta na linha [%d] e na coluna [%d].\n", maior,linha,coluna);

    return 0;
}