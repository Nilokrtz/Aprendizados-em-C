#include <stdio.h>

int numero = 0,soma = 0, i;
float media;

int main(){


    for(i = 0; numero>=0; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero>=0){
            soma += numero;
        }
        
    }
    printf("%d\n%d", i,soma);
    
    media = soma / (i-1);
    printf("A media dos numeros digitados foi de: %f", media);

    return 0;
}