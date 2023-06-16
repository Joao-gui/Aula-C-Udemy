/**
 * @file E23.c
 * @author your name (you@domain.com)
 * @brief Exercise 23 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double metros, jardas;

    printf("Digite o valor da distância em metros: ");
    scanf("%lf", &metros);
    jardas=metros/0.91;
    printf("O valor de %.2lfm em jardas é de %.2lf jardas.", metros, jardas);
    return 0;
}
