/**
 * @file E4.c
 * @author your name (you@domain.com)
 * @brief Leia um numero real e imprima o resultado do quadrado desse numero
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float resultado, num;
    printf("Digite um numero Real para saber a raiz quadrada: ");
    scanf("%f", &num);
    resultado=sqrt(num);
    printf("O resultado da raiz quadrada de %.0f e: %.2f", num, resultado);
    return 0;
}
