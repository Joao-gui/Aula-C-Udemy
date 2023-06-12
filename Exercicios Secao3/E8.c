/**
 * @file E8.c
 * @author your name (you@domain.com)
 * @brief Leia uma temperatura em Kelvin e apresente-a convertida em Celsius.
 * A fórmula de conversão é: C=K-273.15
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double temperatucaC, temperatudaK;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%lf", &temperatudaK);
    temperatucaC=temperatudaK-273.15;
    printf("A temperatura %.2lfK em Celsius e de %.2lfC", temperatudaK, temperatucaC);
    return 0;
}
