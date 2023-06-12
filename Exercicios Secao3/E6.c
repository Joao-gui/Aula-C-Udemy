/**
 * @file E6.c
 * @author your name (you@domain.com)
 * @brief Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
 * A Formula de conversão é: F=C*(9.0/5.0)+32.0, sendo C temperatura em Celsius e F temperatura em
 * Farenheit.
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    double temperaturaC, temperaturaF;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &temperaturaC);
    temperaturaF=temperaturaC*(9.0/5.0)+32.0;
    printf("A temperatura %.1lfC em Farenheit e de %.1lfF",temperaturaC, temperaturaF);
    return 0;
}
