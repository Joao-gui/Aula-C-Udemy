/**
 * @file E25.c
 * @author your name (you@domain.com)
 * @brief Exercise 25 Section 3
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
    double aCres, metrosQuadrados;

    printf("Gitie o valor da �rea em acres: ");
    scanf("%lf", &aCres);
    metrosQuadrados=aCres*4048.58;
    printf("O valor da �rea de %.2lf acres em m� � de %.2lfm�.", aCres, metrosQuadrados);
    return 0;
}
