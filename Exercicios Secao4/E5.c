/**
 * @file E5.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int numero;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero inteiro: ");
    scanf("%d%*c", &numero);
    if (numero % 2 == 0)
    {
        printf("Este numero é par.");
    }
    else
    {
        printf("Este numero é impar");
    }
    return 0;
}
