/**
 * @file E22.c
 * @author your name (you@domain.com)
 * @brief Exercise 22 Section 3
 * @version 0.1
 * @date 2023-06-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    double  jardas, metros;

    printf("Digite o valor da distancia em jardas: ");
    scanf("%lf", &jardas);
    metros=0.91*jardas;
    printf("O valord de %.2lf jards em metros e de %.2lfm.", jardas, metros);
    return 0;
}
