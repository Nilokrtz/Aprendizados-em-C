#include <stdio.h>

float centigrados,fahrenheint;

int main()
{
    printf("Digite quantos centigrados deseja passar para Fahrenheit: ");
    scanf("%f", &centigrados);

    fahrenheint = (9*centigrados + 160)/5;
    
    printf("Fahrenheint: %.2f",fahrenheint);
   
    return 0;
}
