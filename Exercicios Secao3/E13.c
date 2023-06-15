/**
 * @file E13.c
 * @author your name (you@domain.com)
 * @brief Leia a distância em quilômetros e apresente-a convertida em milhas.
 * A fórmula de conversão é: M = K/1.61, sendo K a distância em quilometros e M em milhas.
 * @version 0.1
 * @date 2023-06-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double distanciaMilha, distanciaKm;

    printf("Digite a disntancia em  Km: ");
    scanf("%lf", &distanciaKm);
    distanciaMilha=distanciaKm/1.61;
    printf("A distancia de %.2lf Km em milhas e %.2lf milhas", distanciaKm, distanciaMilha);
    return 0;
}
