/**
 * @file E40.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    float diasTrabalhados, valorPagar;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &diasTrabalhados);
    valorPagar=diasTrabalhados*30;
    valorPagar-=valorPagar*0.08;
    printf("Valor a pagar e de R$%.2f", valorPagar);
    return 0;
}
