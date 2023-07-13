/**
 * @file E27.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d%*c", &idade);
    if (idade >= 5 && idade <= 7)
    {
        printf("Categoria Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Categoria Intantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Categoria Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Categoria Juvenil B");
    }
    else if (idade >= 18)
    {
        printf("Categoria Senior");
    }
    else
    {
        printf("Idade invalida");
    }    
    return 0;
}
