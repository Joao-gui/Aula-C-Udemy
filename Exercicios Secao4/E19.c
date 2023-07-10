/**
 * @file E19.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite o valor: ");
    scanf("%d%*c", &numero);
    if (numero % 3 == 0 || numero % 5 == 0)
    {
        printf("Numero divisivel por 3 ou por 5.");
    }
    else
    {
        printf("Numero não divisivel nem por 3 e nem por 5.");
    }    
    return 0;
}
