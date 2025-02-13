#include <stdio.h>

int nota1, nota2, media, exame;

int main()
{

    printf("Digite a nota da sua primeira prova aluno (0 a 100): ");
    scanf("%i", &nota1);

    printf("Digite a nota da sua segunda prova aluno (0 a 100): ");
    scanf("%i", &nota2);

    media = (nota1 + nota2) / 2;
    if (media >= 70)
    {
        printf("Parabens voce foi aprovado !!!");
    }
    else if (media >= 40 && media < 70)
    {
        printf("Parece que voce ficou de exame final\nInforme a nota do seu exame final: ");
        scanf("%i", &exame);

        media += exame;

        if (media >= 100)
        {
            printf("Parabens voce foi aprovado !!!");
        }
        else
        {
            printf("Voce foi reprovado !!!");
        }
    }
    else
    {
        printf("Voce foi reprovado !!!");
    }
    
    return 0;
}