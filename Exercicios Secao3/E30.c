/**
 * @file E30.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
    double valorReal, valorDolar;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor em Real: ");
    scanf("%lf",&valorReal);
    valorDolar=valorReal/4.77;
    printf("A cota��o monetaria no momento do dolaer � de R$1,00 = $4,77\n");
    printf("O valor da convers�o de R$%.3lf � de $%.3lf.", valorReal, valorDolar);
    getch();
    return 0;
}
