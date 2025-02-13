#include <stdio.h>
#include <math.h>

struct Complexo {
    float real;
    float imaginario;
};

struct Complexo soma(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginario = z.imaginario + w.imaginario;
    return resultado;
}

struct Complexo subtracao(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginario = z.imaginario - w.imaginario;
    return resultado;
}

struct Complexo produto(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real * w.real - z.imaginario * w.imaginario;
    resultado.imaginario = z.real * w.imaginario + z.imaginario * w.real;
    return resultado;
}

float modulo(struct Complexo z) {
    return sqrt(z.real * z.real + z.imaginario * z.imaginario);
}

int main() {
    struct Complexo z, w;


    printf("Digite a parte real de z: ");
    scanf("%f", &z.real);
    printf("Digite a parte imaginária de z: ");
    scanf("%f", &z.imaginario);

    printf("\nDigite a parte real de w: ");
    scanf("%f", &w.real);
    printf("Digite a parte imaginária de w: ");
    scanf("%f", &w.imaginario);


    struct Complexo resultadoSoma = soma(z, w);
    struct Complexo resultadoSubtracao = subtracao(z, w);
    struct Complexo resultadoProduto = produto(z, w);

    float moduloZ = modulo(z);
    float moduloW = modulo(w);


    printf("\nResultados:\n");
    printf("Soma: %.2f + %.2fi\n", resultadoSoma.real, resultadoSoma.imaginario);
    printf("Subtração: %.2f + %.2fi\n", resultadoSubtracao.real, resultadoSubtracao.imaginario);
    printf("Produto: %.2f + %.2fi\n", resultadoProduto.real, resultadoProduto.imaginario);
    printf("Módulo de z: %.2f\n", moduloZ);
    printf("Módulo de w: %.2f\n", moduloW);

    return 0;
}
