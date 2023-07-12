/**
 * @file E24.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int opcao;
    float valor;
    printf("Escolha o estado que deseja comprar:\n");
    printf("1 - MG.\n");
    printf("2 - SP.\n");
    printf("3 - RJ.\n");
    printf("4 - MS.\n");
    scanf("%d%*c", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite o valor da mercadoria: ");
        scanf("%f%*c", &valor);
        valor = valor+(valor*0.07);
        printf("O valor a pagar no estado de MG e de R$ %.1f", valor);
        break;
    
    case 2:
        printf("Digite o valor da mercadoria: ");
        scanf("%f%*c", &valor);
        valor = valor+(valor*0.12);
        printf("O valor a pagar no estado de SP e de R$ %.1f", valor);
        break;
        
    case 3:
        printf("Digite o valor da mercadoria: ");
        scanf("%f%*c", &valor);
        valor = valor+(valor*0.15);
        printf("O valor a pagar no estado de RJ e de R$ %.1f", valor);
        break;

    case 4:
        printf("Digite o valor da mercadoria: ");
        scanf("%f%*c", &valor);
        valor = valor+(valor*0.08);
        printf("O valor a pagar no estado de MS e de R$ %.1f", valor);
        break;

    default:
        printf("Estado selecionado Invalido.");
        break;
    }    
    return 0;
}
