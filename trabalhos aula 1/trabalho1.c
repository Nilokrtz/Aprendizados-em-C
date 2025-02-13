#include <stdio.h>

float celsius, fahrenheit;

int main ()
{
    printf("Digite quantos graus serao convertidos em Fahrenheit: ");
    scanf("%f", &celsius);  
    fahrenheit = (9 * celsius + 160) / 5;
    printf("O valor em Fahrenheit e: %.2f\n", fahrenheit);  
    return 0;
}
