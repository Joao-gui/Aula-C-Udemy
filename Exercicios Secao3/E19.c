/**
 * @file E19.c
 * @author your name (you@domain.com)
 * @brief Exercise 19 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double metroCubicos, litros;

    printf("Digite o valor do volume em litros: ");
    scanf("%lf", &litros);
    metroCubicos=litros/1000;
    printf("O valor de %.2lfL em metros cubicos e de %.2lfm3.", litros,metroCubicos);
    return 0;
}
