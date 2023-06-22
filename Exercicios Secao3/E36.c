/**
 * @file E36.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float alturaCilindro, raioCilindro, volumeCilindro;
    double teste;
    #define _USE_MATH_DEFINES

    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &alturaCilindro);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raioCilindro);
    volumeCilindro=M_PI*pow(raioCilindro,2);
    printf("O volume do cilindro e de %.1f\n", volumeCilindro);
    teste = M_PI;
    printf("%lf e %lf", teste, M_PI);
    getch();
    return 0;
}
