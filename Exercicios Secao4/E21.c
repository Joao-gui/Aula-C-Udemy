/**
 * @file E21.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    float numero1, numero2, resultado;
    printf("Escolha uma opção:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero.)\n");
    scanf("%d%*c", &opcao);
    printf("Digite o primeiro valor: ");
    scanf("%f%*c", &numero1);
    printf("Digite o segundo valor: ");
    scanf("%f%*c", &numero2);
    if (opcao == 1)
    {
        resultado = numero1 + numero2;
        printf("O resultado e %.1f.", resultado);
    }
    else if (opcao == 2)
    {
        if (numero1 > numero2)
        {
            resultado = numero1 - numero2;
        }
        else if (numero2 > numero1)
        {
            resultado  = numero2 - numero1;
        }
        else if (numero1 == numero2)
        {
            resultado = numero1 - numero2;
        }
        printf("O resultado e %.1f.", resultado);
    }
    else if (opcao == 3)
    {
        resultado = numero1 * numero2;
        printf("O resultado e %.1f.", resultado);
    }
    else if (opcao == 4)
    {
        if (numero2 == 0)
        {
            printf("Denominador nao pode ser Zero.");
        }
        else
        {
            resultado = numero1/numero2;
            printf("O resultado e %.1f.", resultado);
        }
    }
    else
    {
        printf("Opcao invalida.");
        return 0;
    }
    return 0;
}
