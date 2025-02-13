#include <stdio.h>
#include <math.h>


float CalcularDistancia(float x1, float y1, float x2, float y2) {

    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}

int main() {
    
    float x2, x1, y2, y1, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = CalcularDistancia(x1, y1, x2, y2);

    printf("A distancia entre eles e: %.2f\n", distancia);

    return 0;
}
