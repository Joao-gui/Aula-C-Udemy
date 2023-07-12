/**
 * @file E23.c
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
    int ano;
    printf("Digite o valor do ano: ");
    scanf("%d%*c", &ano);
    if (ano % 100 != 0)
    {
        if (ano % 400 == 0 || ano % 4 == 0)
        {
            printf("Ano é Bissexto.");
        }
        else
        {
            printf("Ano nao e Bissexto.");
        }
    }
    else
    {
        printf("Ano nao e Bissexto.");;
    } 
        
    return 0;
}
