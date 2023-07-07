/**
 * @file E13.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float notaA, notaB, notaC, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f%*c", &notaA);
    printf("Digite a nota da segunda prova: ");
    scanf("%f%*c", &notaB);
    printf("Digite a nota da terceira prova: ");
    scanf("%f%*c", &notaC);
    media=(notaA+notaB+notaC*2)/4;
    if (media >= 6)
    {
        printf("Aprovado.");
    }
    else
    {
        printf("Reprovado.");
    }    
    return 0;
}
