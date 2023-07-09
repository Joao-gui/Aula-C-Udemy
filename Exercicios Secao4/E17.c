/**
 * @file E17.c
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
    float baseMenor, baseMaior, altura, area;
    printf("Digite o tamanho da base menor: ");
    scanf("%f%*c", &baseMenor);
    printf("Digite o tamanho da base maior: ");
    scanf("%f%*c", &baseMaior);
    printf("Digite a altura: ");
    scanf("%f%*c", &altura);
    if (baseMaior > 0 && baseMenor >0)
    {
        area = (baseMaior+baseMenor)*altura/2;
        printf("A area e de %.1f.", area);
    }
    else if (baseMaior <= 0 || baseMenor <= 0)
    {
        printf("Numero invalido.");
    }    
    return 0;
}
