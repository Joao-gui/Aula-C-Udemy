/**
 * @file E27.c
 * @author your name (you@domain.com)
 * @brief Excercise 27 Section 3
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double hEctares, metrosQuadrados;

    printf("Digite o valor da área em hectares:");
    scanf("%lf", &hEctares);
    metrosQuadrados=hEctares*10000;
    printf("O valor da área de %.2lf hectares em m² é de %.2lfm².\n", hEctares, metrosQuadrados);
    printf("Precione qualquer tecla para finalizar. . .");
    getch();
    return 0;
}
