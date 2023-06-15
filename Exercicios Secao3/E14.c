/**
 * @file E14.c
 * @author your name (you@domain.com)
 * @brief Leia o ângulo em graus e apresente-o convertido em radianos.
 * A fórmula é: R = G*pi/180, sengo G ângulo em graus e R em radianos. pi = 3.14
 * @version 0.1
 * @date 2023-06-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double anguloGraus, anguloRadianos;

    #define _USE_MATH_DEFINES // Habilitar M_PI

    printf("Type the angle in degrees: ");
    scanf("%lf", &anguloGraus);
    anguloRadianos=anguloGraus*M_PI/180; //M_PI valor de pi
    printf("The %.2lf degrees in radians is %.2lf. \n", anguloGraus, anguloRadianos);
    return 0;
}
