/**
 * @file E2.c
 * @author your name (you@domain.com)
 * @brief Faça um programa que leia um numero real e o imprima
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int	main()
{
    // Declarando uma variável com ponto flutuante
    float num;

    printf("Insira um numero Real:");

    scanf("%f", &num);

    printf("O numero atribuido e: %.2f", num); // Comando Float com 2 numeros decimais

    return 0;
}
