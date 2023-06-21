/**
 * @file E33.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-21
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
    double ladoQuadrado,areaQuadrado;

    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &ladoQuadrado);
    areaQuadrado=pow(ladoQuadrado, 2);
    printf("A área do quadro de lado %.1lf é %.1lf.", ladoQuadrado, areaQuadrado);
    getch();
    return 0;
}
