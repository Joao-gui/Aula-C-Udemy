/**
 * @file E21.c
 * @author your name (you@domain.com)
 * @brief Exercise 21 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double libras, quiloGramas;

    printf("Digite o valor da massa em libras: ");
    scanf("%lf", &libras);
    quiloGramas=libras*0.45;
    printf("O valor de %.2lflib em Kg e de %.2lfkg.", libras, quiloGramas);
    return 0;
}
