/**
 * @file E37.c
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
    float valorProduto, valorDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    valorDesconto=valorProduto*0.12;
    valorProduto -= valorDesconto;
    printf("O valor do produto com 12%% de desconto e de R$%.2f", valorProduto);
    getch();
    return 0;
}
