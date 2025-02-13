#include <stdio.h>

int vect[10], numero;

int main()
{
      for (int i = 0; i < 10; i++)
    {
        int valido = 0; 
        while (!valido)
        {
            valido = 1; 
            printf("Digite um numero para preencher o vetor na posicao [%d]: ", i);
            scanf("%d", &numero);

            
            for (int j = 0; j < i; j++) 
            {
                if (vect[j] == numero)
                {
                    printf("Numero invalido, ja existe no vetor.\n");
                    valido = 0; 
                    break;      
                }
            }
        }
        vect[i] = numero; 
    }


    // Exibindo o vetor
    printf("\nVetor final:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vect[i]);
    }
    printf("\n");

    return 0;
}