/**
 * @file E38.c
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
    float valorSalario, novoSalario;

    printf("DIgite o valor do salario: ");
    scanf("%f", &valorSalario);
    novoSalario = valorSalario+valorSalario*0.25;
    printf("Seu novo salario com aumento de 25%% e de R$%.2f", novoSalario);
    getch();
    return 0;
}
