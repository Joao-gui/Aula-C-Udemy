/**
 * @file E34.c
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
    double raioCirculo, areaCirculo;
    #define _USE_MATH_DEFINES
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o valor do raio da circuferência: ");
    scanf("%lf", &raioCirculo);
    areaCirculo=M_PI*pow(raioCirculo,2);
    printf("A área da circuferência de um circulo de raio %.1lf é de %.1lf.", raioCirculo, areaCirculo);
    getch();
    return 0;
}

