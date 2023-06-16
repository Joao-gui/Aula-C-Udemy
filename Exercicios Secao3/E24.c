/**
 * @file E24.c
 * @author your name (you@domain.com)
 * @brief Exercise 24 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double metrosQuadrados, aCres;

    printf("Digite o valor da área em m²: ");
    scanf("%lf",&metrosQuadrados);
    aCres=metrosQuadrados*0.000247;
    printf("O valor da área de %.2lfm² em acres é de %.2lf acres.", metrosQuadrados, aCres);
    return 0;
}
