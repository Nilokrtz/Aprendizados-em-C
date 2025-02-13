#include <stdio.h>

float alturaChico = 1.50,alturaZe = 1.10;
int anos;

int main(){

    for(anos = 0;alturaChico>alturaZe; anos++){
        alturaZe += 0.03;
        alturaChico += 0.02;
        printf("Ze: %.2f\nChico: %.2f\n", alturaZe,alturaChico);
    }

    printf("\nDemorara %d anos para Ze passar Chico", anos);

    return 0;
}