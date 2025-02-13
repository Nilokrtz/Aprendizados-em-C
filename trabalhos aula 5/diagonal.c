#include <stdio.h>

int matriz1[5][5];

int main(){

for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j) {
                matriz1[i][j] = 1; 
            } else {
                matriz1[i][j] = 0; 
            }
        }
    }
    
    printf("\n");

    // for para printar a matriz
    for(int i=1; i <= 5; i++){
        for(int j=1; j <= 5; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;
}