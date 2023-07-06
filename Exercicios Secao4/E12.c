/**
 * @file E12.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    float valor;

    printf("Digite um numero inteiro: ");
    scanf("%d%*c", &numero);
    if (numero >= 0)
    {
        valor = log(numero);
        printf("%.2f", valor);
    }
    else
    {
        printf("Numero invalido.");
    }  
    return 0;
}
