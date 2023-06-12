/**
 * @file E7.c
 * @author your name (you@domain.com)
 * @brief Leia uma temperatura em graus Fareheint e apresente-a em graus Celsius.
 * A fórmula de conversão é: C=5*(F-32)/9
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double temperaturaC, temperaturaF;
    printf("Digite a temperatura em Farenheint: ");
    scanf("%lf", &temperaturaF);
    temperaturaC=5*(temperaturaF-32)/9;
    printf("A temperatura %.1lfF em Celsius e de %.1lfC", temperaturaF, temperaturaC);
    return 0;
}