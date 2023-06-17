/**
 * @file E28.c
 * @author your name (you@domain.com)
 * @brief Exercise 28 Section 3
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main()
{
    double valorA, valorB, valorC, tOtal;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite 3 valores\n");
    printf("Priemiro valor:");
    scanf("%lf", &valorA);
    printf("Segundo valor:");
    scanf("%lf", &valorB);
    printf("Terceiro valor:");
    scanf("%lf", &valorC);
    printf("Os valores digitados foram: %.2lf, %.2lf e %.2lf.\n", valorA, valorB, valorC);
    tOtal=pow(valorA,2)+pow(valorB,2)+pow(valorC,2);
    printf("A soma dos quadrados dos 3 valores é de %.2lf.\n", tOtal);
    printf("Precione qualquer tecla para finalizar.");
    getch();
    return 0;
}
