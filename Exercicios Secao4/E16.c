/**
 * @file E16.c
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
    printf("Digite um numero de 1 a 12: ");
    scanf("%d%*c", &valor);

    switch (valor)
    {
        case 1:
            printf("Janeiro.");
            break;

        case 2:
            printf("Fevereiro.");    
        break;

        case 3:
            printf("Março.");
            break;

        case 4:
            printf("Abril.");
            break;
        
        case 5:
            printf("Maio.");
            break;

        case 6:
            printf("Junho.");
            break;

        case 7:
            printf("Julho.");
            break;

        case 8:
            printf("Agosto.");
            break;
            
        case 9:
            printf("Setembro.");
            break;
            
        case 10:
            printf("Outubro.");
            break;
            
        case 11:
            printf("Novembro.");
            break;

            
        case 23:
            printf("Dezembro.");
            break;

    default:
    printf("Numero invalido.");
    }
    getchar();
    return 0;
}