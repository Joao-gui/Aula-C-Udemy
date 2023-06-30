/**
 * @file S4Aula15.c
 * @author your name (you@domain.com)
 * @brief Seção 4 aula 15, variáveis is, else, else if
 * @version 0.1
 * @date 2023-06-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    int idade;

    setlocale(LC_ALL, "Portuguese");
    printf("Qual é a sua idade? ");
    scanf("%d%*c", &idade);

    if (idade < 18)
    {
        printf("Você é menor de idade.\n");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Você é adulto.\n");
    }
    else
    {
        printf("Você é idoso.\n");
    }
    printf("Sua idade é de %d", idade);
    getchar();    
    return 0;
}
