/**
 * @file E10.c
 * @author your name (you@domain.com)
 * @brief Leia a velocidade em km/h e apresente-a convertida em m/s.
 * A formula é: M = K/3.6, sendo K a velocidade em km/h e M  em m/s.
 * @version 0.1
 * @date 2023-06-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double velocidadeKms, velocidadeMs;

    printf("Digite a velocidade em Km/h: ");
    scanf("%lf", &velocidadeKms);
    velocidadeMs=velocidadeKms/3.6;
    printf("A velocidade %.2lfkm/h em m/s é de %.2lfm/s.", velocidadeKms, velocidadeMs);
    return 0;
}
