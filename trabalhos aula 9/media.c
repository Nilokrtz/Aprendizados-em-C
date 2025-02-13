#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[100];
    float P1;
    float P2;
    float P3;
};

float maiorNota(struct Aluno alunos[], int tamanho) {
    float maior = 0;
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].P1 > maior) maior = alunos[i].P1;
        if (alunos[i].P2 > maior) maior = alunos[i].P2;
        if (alunos[i].P3 > maior) maior = alunos[i].P3;
    }
    return maior;
}

float maiorMedia(struct Aluno alunos[], int tamanho) {
    float maior = 0;
    for (int i = 0; i < tamanho; i++) {
        float media = (alunos[i].P1 + alunos[i].P2 + alunos[i].P3) / 3;
        if (media > maior) maior = media;
    }
    return maior;
}

float menorMedia(struct Aluno alunos[], int tamanho) {
    float menor = 200; 
    for (int i = 0; i < tamanho; i++) {
        float media = (alunos[i].P1 + alunos[i].P2 + alunos[i].P3) / 3;
        if (media < menor) menor = media;
    }
    return menor;
}

int main() {
    struct Aluno alunos[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Digite o numero de matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); 

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; 

        printf("Digite a nota da P1: ");
        scanf("%f", &alunos[i].P1);

        printf("Digite a nota da P2: ");
        scanf("%f", &alunos[i].P2);

        printf("Digite a nota da P3: ");
        scanf("%f", &alunos[i].P3);

        printf("\n");
    }

    printf("Dados dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("P1: %.2f\n", alunos[i].P1);
        printf("P2: %.2f\n", alunos[i].P2);
        printf("P3: %.2f\n", alunos[i].P3);
    }

    printf("\nResultados gerais:\n");
    printf("Maior nota: %.2f\n", maiorNota(alunos, 5));
    printf("Maior média: %.2f\n", maiorMedia(alunos, 5));
    printf("Menor média: %.2f\n", menorMedia(alunos, 5));

    return 0;
}
