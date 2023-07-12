/**
 * @file E25.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float valorA, valorB, valorC, valorX1, valorX2, delta;
    printf("Imprima o valor de 'a' para esquacao de 2 grau: ");
    scanf("%f%*c", &valorA);
    if (valorA == 0)
    {
        printf("Nao e equacao de 2 grau.");
    }
    else
    {
        printf("Imprima o valor de 'b' para esquacao de 2 grau: ");
        scanf("%f%*c", &valorB);
        printf("Imprima o valor de 'c' para equacao de 2 grau: ");
        scanf("%f%*c", &valorC);
        delta = pow(valorB,2)-4*valorA*valorC;
        if (delta < 0)
        {
            printf("Delta negativo ,nao existe raiz.");
        }
        else if (delta == 0)
        {   
            printf("Raiz Unica.");
            valorX1 = (-valorB+sqrt(delta)) / (2*valorA);
            printf("Raiz %.2f.", valorX1);
        }
        else if (delta > 0)
        {
            valorX1 = (-valorB+sqrt(delta)) / (2*valorA);
            valorX2 = (-valorB-sqrt(delta)) / (2*valorA);
            printf("Valor da primeira raiz %.2f.\n", valorX1);
            printf("Valor da segunda raiz %.2f.", valorX2);
        }        
    }
    return 0;
}
