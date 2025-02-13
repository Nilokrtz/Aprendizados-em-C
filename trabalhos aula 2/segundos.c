#include <stdio.h>

int segundos, minuto, horas;

int main()
{

    printf("Digite o tempo da partida do Botafogo x Flamengo em segundos: ");
    scanf("%i", &segundos);

    minuto = segundos / 60;
    horas = minuto / 60;

    if (minuto > 60 && (minuto % 60) != 0)
    {
        while(minuto > 60)
        {
            minuto -= 60;
        }
    }
    else{
        minuto = 0;
    }

    if (horas >= 24)
    {
        printf("Nao existe um jogo de futebol que dure mais de 1 dia \nO programa sera encerrado!!!");
        return 1;
    }

    printf("A duracao da sua partida foi de: %i:%.2i", horas, minuto);

    return 0;
}
