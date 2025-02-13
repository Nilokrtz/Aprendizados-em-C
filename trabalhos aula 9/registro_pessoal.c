#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[100];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float media; 
};

int main() {
    struct Aluno alunos[10];
    int n;
    
    do {
        printf("Digite o número de alunos: ");
        scanf("%d", &n);
        getchar(); 
        if (n <= 0 || n > 10) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (n <= 0 || n > 10);

    
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Digite a matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); 

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; 

        printf("Digite o código da disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Digite a Nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a Nota2: ");
        scanf("%f", &alunos[i].nota2);

        
        alunos[i].media = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;
    }

    
    printf("\nListagem Final dos Alunos:\n");
    printf("-----------------------------------------------------------\n");
    printf("%-10s %-20s %-15s %-10s\n", "Matrícula", "Nome", "Código Disc.", "Média");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15d %-10.2f\n", 
               alunos[i].matricula, 
               alunos[i].nome, 
               alunos[i].codigoDisciplina, 
               alunos[i].media);
    }

    return 0;
}
