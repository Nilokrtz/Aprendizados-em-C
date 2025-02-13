#include <stdio.h>

int lados, tamanho;
float area;

int main(){

    printf("Digite o numero de lados de seu poligono possui: ");
    scanf("%i", &lados);
    printf("Digite o tamanho dos lados desse poligono possui: ");
    scanf("%i", &tamanho);

    switch (lados){
    
    case 3:
        area = (tamanho * tamanho * 1.73)/4;
        printf("A area do seu Triangulo Regular e de: %.2f", area);
    break;
    
    case 4:
        area = tamanho * tamanho;
        printf("A area do seu Quadrado e de: %.2f", area);
    break;
    
    case 6:
        area = (6 * tamanho * tamanho * 1.73)/4;
        printf("A area do seu Hexagono Regular e de: %.2f", area);
    break;
    
    default:
        printf("Nao sei calcular essa area, o programa sera encerrado !");
    break;
    
    }

    return 0;
}