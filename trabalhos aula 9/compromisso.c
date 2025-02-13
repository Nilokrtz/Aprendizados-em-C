#include <stdio.h>
#include <string.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;          
    struct Horario horario;    
    char descricao[100];       
};

int main() {
    
    struct Compromisso compromisso;

    compromisso.data.dia = 29;
    compromisso.data.mes = 12;
    compromisso.data.ano = 2024;

    compromisso.horario.hora = 15;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;
    
    strcpy(compromisso.descricao, "Reuniao de planejamento anual.");
    
    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%04d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Descricao: %s\n", compromisso.descricao);

    return 0;
}
