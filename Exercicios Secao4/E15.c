/**
 * @file E15.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d%*c", &valor);

    switch (valor)
    {
        case 1:
            printf("Domingo.");
            break;

        case 2:
            printf("segunda.");    
        break;

        case 3:
            printf("Terça.");
            break;

        case 4:
            printf("Quarta.");
            break;
        
        case 5:
            printf("Quinta.");
            break;

        case 6:
            printf("Sexta.");
            break;

        case 7:
            printf("Sabado.");
            break;

    default:
    printf("Numero invalido.");
    }
    getchar();
    return 0;
}
