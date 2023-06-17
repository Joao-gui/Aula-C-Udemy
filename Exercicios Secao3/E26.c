/**
 * @file E26.c
 * @author your name (you@domain.com)
 * @brief Exercise 26 Section 3
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Biblioteca para system("pause")
#include <conio.h> // Biblioteca pasa getch()

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double metrosQuadrados, hEctares;

    printf("Digite o valor da área em m²:");
    scanf("%lf", &metrosQuadrados);
    hEctares=metrosQuadrados*0.0001;
    printf("O valor da área de %.2lfm² em hectares é de %.2lf hectares.\n", metrosQuadrados,hEctares);
    printf("Precione qualquer telca para finalizar.");
    // system ("pause");
    getch();
    return 0;
}
