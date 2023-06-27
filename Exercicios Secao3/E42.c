/**
 * @file E42.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-27
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
    float salarioBase, salarioGratificacao, salarioImposto;

    printf("Digite o valor do salário: ");
    scanf("%f", &salarioBase);
    salarioGratificacao=salarioBase+salarioBase*0.05;
    salarioImposto=salarioGratificacao-salarioGratificacao*0.07;
    printf("O salário do funcionário é de R$%.1f.", salarioImposto);
    getch();
    return 0;
}
