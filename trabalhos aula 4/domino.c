#include <stdio.h>

int soma = 0;

int main(){

    for(int i = 0 ; i<=6; i++){
        printf("(%d,4)\n", i);
        printf("%d\n",soma);
        soma += i + 4;
        printf("%d\n",soma);

    }
    printf("A soma das pecas e: %d",soma);
    
    return 0;
}