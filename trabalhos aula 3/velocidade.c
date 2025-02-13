#include <stdio.h>

int velocidadeMaxima, velocidadeMotorista,multa;

int main(){
    
    printf("Digite a velocidade maxima da avenida: ");
    scanf("%i", &velocidadeMaxima);
    printf("Digite a velocidade que voce estava na avenida: ");
    scanf("%i", &velocidadeMotorista);

    if(velocidadeMotorista > velocidadeMaxima){
        multa = 5*(velocidadeMotorista-velocidadeMaxima); 
        printf("Voce ultrapassou o limite de velocidade, devido a isso\nRecebera uma multa no valor de R$%i,00", multa);
    }
    else{
        printf("Voce nao ultrapassou o limite de velocidade !!!");
    }

    return 0;
}