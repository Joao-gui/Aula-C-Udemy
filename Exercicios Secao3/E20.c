/**
 * @file E20.c
 * @author your name (you@domain.com)
 * @brief Exercise 20 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double quiloGramas, libras;

    printf("Digite o valor da massa em kg: ");
    scanf("%lf", &quiloGramas);
    libras=quiloGramas/0.45;
    printf("O valor de %.2lfkg em libras e de %.2lflib.", quiloGramas,libras);
    return 0;
}
