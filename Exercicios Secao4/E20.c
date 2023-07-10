/**
 * @file E20.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float vetorA, vetorB, vertoC;
    printf("Digite o valor do primeiro vetor: ");
    scanf("%f%*c", &vetorA);
    printf("Digite o valor do segundo verto: ");
    scanf("%f%*c", &vetorB);
    printf("Digite o valor do terceiro vetor: ");
    scanf("%f%*c", &vertoC);
    if (vetorA < vetorB+vertoC && vetorB < vetorA+vertoC && vertoC < vetorA+vetorB)
    {
        if (vetorA == vetorB && vetorB == vertoC)
        {
            printf("Triangulo Equilatero");
        }
        else if (vetorA == vetorB || vetorB == vertoC)
        {
            printf("Triangulo isosceles.");
        }
        else if (vetorA != vetorB && vetorB != vertoC)
        {
            printf("Triangulo escaleno.");
        }       
    }
    else
    {
        printf("Vetores nao sao de um triangulo.");
    }
    
    return 0;
}
