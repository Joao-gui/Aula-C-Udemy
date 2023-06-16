/**
 * @file E18.c
 * @author your name (you@domain.com)
 * @brief Exercise 18 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double metrosCubicos, litros;

    printf("Digite o valor do volume em metros cubicos: ");
    scanf("%lf",&metrosCubicos);
    litros=metrosCubicos*1000;
    printf("O valor de %.2lf m3 em litros e de %.2lfL.", metrosCubicos,litros);
    return 0;
}
