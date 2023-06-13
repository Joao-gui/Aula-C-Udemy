/**
 * @file E12.c
 * @author your name (you@domain.com)
 * @brief Leia a distância em milhas e apresnete-a convertida em quilômetros.
 * A fórmula de conversão é: K = 1.61*M, sendo K distância em quilômetros e M em milhas.
 * @version 0.1
 * @date 2023-06-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double distanciaMilha, distanciaKm;

    printf("Digite a dinstancia em Milhas: ");
    scanf("%lf", &distanciaMilha);
    distanciaKm=1.61*distanciaMilha;
    printf("A distancia de %.2lf milhas e de %.2lf km.", distanciaMilha, distanciaKm);
    return 0;
}

