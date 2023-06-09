/**
 * @file E9.c
 * @author your name (you@domain.com)
 * @brief Leia uma temperatura em Celsius e apresente-a convertida em Kelvin.
 * A formula de convers�o �: K=C+273.15
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double temperaturaC, temeperaturaK;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &temperaturaC);
    temeperaturaK=temperaturaC+273.15;
    printf("A temperatura %.2lfC em Kelvin � de %.2lfK", temperaturaC, temeperaturaK);
    return 0;
}
