/**
 * @file E11.c
 * @author your name (you@domain.com)
 * @brief Leia a velocade em m/s e apresente-a convertida em km/h.
 * A formula é? K = M*3.6, sendo K velocidade em km/h e M em m/s.
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

    double velocidadeKmh, velocidadeMs;

    printf("Digite a velocidade em m/s: ");
    scanf("%lf", &velocidadeMs);
    velocidadeKmh=velocidadeMs*3.6;
    printf("A velodade %.2lfm/s em km/h é de %.2lfkm/h.", velocidadeMs, velocidadeKmh);
    return 0;
}
