/**
 * @file E1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    float numeroA, numeroB;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do primeiro numero: ");
    scanf("%f%*c", &numeroA);
    printf("Digite o valor do segundo numero: ");
    scanf("%f%*c", &numeroB);
    if (numeroA>numeroB)
    {
        printf("%.2f.", numeroA);
    }
    else if (numeroB>numeroA)
    {
        printf("%.2f.", numeroB);
    }
    else
    {
        printf("Os dois numeros são iguais.");
    }
    getchar();    
    return 0;
}
