#include <stdio.h>


float CalcularMedia(float nota1, float nota2, float nota3, char tipo) {
    float media;

    switch (tipo) {
        case 'A': 
            media = (nota1 + nota2 + nota3) / 3.0;
            break;

        case 'P': 
            media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10.0;
            break;

        case 'H': 
            media = 3.0 / ((1.0 / nota1) + (1.0 / nota2) + (1.0 / nota3));
            break;

        default:
            printf("Tipo de media invalido.\n");
            return -1; 
    }

    return media;
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    
    printf("Digite o tipo de media (A - Aritmetica, P - Ponderada, H - Harmonica): ");
    scanf(" %c", &tipo); 

    
    float resultado = CalcularMedia(nota1, nota2, nota3, tipo);

    if (resultado != -1) { 
        printf("A media calculada e: %.2f\n", resultado);
    }

    return 0;
}
