/**
 * @file E8.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    float notaA, notaB, media;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da primeira nota: ");
    scanf("%f%*c", &notaA);
    printf("Digite o valor da segunda nota: ");
    scanf("%f%*c", &notaB);

    if (notaA>=0 && notaA<=10 && notaB>=0 && notaB<=10)
    {
        media = (notaA+notaB)/2;
        printf("Media e de %.1f.", media);
    }
    else
    {
        printf("Nota invalida.");
    }    
    return 0;
}
