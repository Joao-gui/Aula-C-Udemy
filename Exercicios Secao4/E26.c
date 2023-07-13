/**
 * @file E26.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    float quiloMetro, litros, kmPorlitro;
    printf("Digite a distancia em Km: ");
    scanf("%f%*c", &quiloMetro);
    printf("Digite a quantidade de litros: ");
    scanf("%f%*c", &litros);
    kmPorlitro = quiloMetro/litros;
    if (kmPorlitro < 8)
    {
        printf("Venda o carro!\n");
        printf("%.1f km/l", kmPorlitro);
    }
    else if (kmPorlitro >= 8 && kmPorlitro <= 12)
    {
        printf("Economico!\n");
        printf("%.1f km/l", kmPorlitro);
    }
    else if (kmPorlitro > 12)
    {
        printf("Super enconomico!\n");
        printf("%.1f km/l", kmPorlitro);
    }    
    return 0;
}
