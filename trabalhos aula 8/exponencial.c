#include <stdio.h>


float potencia(float base, int expoente) {
    if (expoente < 1) {
        printf("O expoente deve ser um inteiro maior ou igual a 1.\n");
        return -1; 
    }

    float resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    float base;
    int expoente;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente maior que 1: ");
    scanf("%d", &expoente);

    float resultado = potencia(base, expoente);

    if (resultado != -1) {
        printf("%.2f elevado a %d e: %.2f\n", base, expoente, resultado);
    }

    return 0;
}
