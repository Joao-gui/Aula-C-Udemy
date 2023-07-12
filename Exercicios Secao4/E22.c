/**
 * @file E22.c
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
    int idade, tempoServico;
    printf("Digite a idade do trabalhador: ");
    scanf("%d%*c", &idade);
    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d%*c", &tempoServico);
    if (idade >= 65 || tempoServico >= 30)
    {
        printf("Pode se aposentar.");
    }
    else if (idade >= 60 && idade < 65 && tempoServico >= 25 && tempoServico < 30)
    {
        printf("Pode se aposentar 2.");
    }
    else
    {
        printf("Não pode se aposentar.");
    }    
    
    return 0;
}
