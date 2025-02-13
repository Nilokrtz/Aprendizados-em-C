#include <stdio.h>

int horas, valor, salario;

int main(){

    printf("Digite quantas horas voce trabalhou essa semana: ");
    scanf("%i", &horas);
    printf("Digite o valor da sua hora: ");
    scanf("%i", &valor);

    if(horas > 60){
        valor = valor * 2;
    }
    else if(horas > 40 && horas < 60){
        valor = valor * 1.5;
    }
    else{
        salario = valor * horas;
        printf("Voce nao teve direito a acrescimo\nSeu salario semanal foi de : R$%i,00", salario);
        return 1;
    }

    salario = valor * horas;
    printf("Seu salario com acrescimo foi de : R$%i,00", salario);

    return 0;
}