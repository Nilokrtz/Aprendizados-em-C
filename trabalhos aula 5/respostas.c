#include <stdio.h>

char matriz1[5][10],resposta[10] = {'a','d','c','c','b','a','b','d','b','c'},aux;
int resultado[5];

int main(){

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Digite a resposta aluno %d para a questao [%d]: ", i+1,j+1);
            scanf(" %c", &aux);
            matriz1[i][j] = aux;
        }
    }
    
    printf("\n");

    // revisao nota

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if(matriz1[i][j] == resposta[j]){
                resultado[i]++;
            }
        }
    }



    // for para printar a matriz
    for(int i=0; i < 5; i++){
        printf("Nota Aluno %d: %d\n", i+1,resultado[i]);
    }

        printf("\n");

    return 0;
}