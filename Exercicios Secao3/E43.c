/**
 * @file E43.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorProduto, valorAvista, valorParcela, valorComissaoAvista, valorComissaoParecelado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    valorAvista = valorProduto-valorProduto*0.10;
    valorParcela = valorProduto/3;
    valorComissaoAvista = valorAvista*0.05;
    valorComissaoParecelado = valorProduto*0.05;
    printf("O valor do produtor � de R$%.2f.\n", valorProduto);
    printf("O valor do produtor a vista � de R$%.2f.\n", valorAvista);
    printf("O valor do produtor parcelado em 3x � de R$%.2f.\n", valorParcela);
    printf("A comiss�o do vendedor produto a vista � de R$%.2f.\n", valorComissaoAvista);
    printf("A comiss�o do vendedor produto parcelado � de R$%.2f.\n", valorComissaoParecelado);
    getch();
    return 0;
}
