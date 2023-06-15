/**
 * @file E15.c
 * @author your name (you@domain.com)
 * @brief Exercise 15 Section 3
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

    #define _USE_MATH_DEFINES

    printf("Type the angle in radian: ");
    scanf("%lf", &anguloRadianos);
    anguloGraus=anguloRadianos*180/M_PI;
    printf("The %.2lf radians in degrees is %.2lf. \n", anguloRadianos, anguloGraus); // o \n pula linha
    return 0;
}
