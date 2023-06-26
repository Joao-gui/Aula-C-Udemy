/**
 * @file E41.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float horasTrabalhadas, valorHora, totalPagar;

    printf("Digite o valor de horas trabalhadas no m�s: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    totalPagar = horasTrabalhadas*valorHora;
    printf("O valor a pagar � de R$%.2f.", totalPagar);
    getch();
    return 0;
}
