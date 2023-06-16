/**
 * @file E17.c
 * @author your name (you@domain.com)
 * @brief Exercise 17 Section 3
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

    printf("Digite o valor do comprimento em centimetros: ");
    scanf("%lf", &centimetros);
    polegadas=centimetros/2.54;
    printf("O valor de %.2lfcm em polegadas e de %.2lf polegadas.", centimetros,polegadas);
    return 0;
}
