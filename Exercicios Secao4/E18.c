/**
 * @file E18.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int opcao;
    float valor1, valor2, resultado;
    printf("Selecione a opcao que deseja: \n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Divisao\n");
    printf("4-Multiplicacao\n");
    scanf("%d%*c", &opcao);
    printf("Digite o primeiro valor: ");
    scanf("%f%*c", &valor1);
    printf("Digite o segund valor: ");
    scanf("%f%*c", &valor2);
    if (opcao == 1)
    {
        resultado = valor1+valor2;
    }
    else if (opcao == 2)
    {
        resultado = valor1 - valor2;
    }
    else if (opcao == 3)
    {
        resultado = valor1/valor2;
    }
    else if (opcao == 4)
    {
        resultado = valor1*valor2;
    }
    else
    {
        printf("Opcao invalida.");
    }
    printf("O resultado e %.1f.", resultado);   
    return 0;
}
