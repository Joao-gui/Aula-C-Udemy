/**
 * @file E16.c
 * @author your name (you@domain.com)
 * @brief Exercise 16 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double polegadas, centimetros;

    printf("Digite o valor do comprimento em polegadas: ");
    scanf("%lf", &polegadas);
    centimetros=polegadas*2.54;
    printf("O valor de %.2lf polegadas em centimetros e %.2lfcm.", polegadas,centimetros);
    return 0;
}
