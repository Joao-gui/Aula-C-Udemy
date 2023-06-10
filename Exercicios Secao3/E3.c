/**
 * @file E3.c
 * @author your name (you@domain.com)
 * @brief Peça ao usuário para digitar 3 valores inteiros e imprima a soma deles
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>


int main()
{
    int num1, num2, num3, soma;

    printf("Digite 3 numeros inteiros: ");

    scanf("%d %d %d", &num1, &num2, &num3);

    soma=num1+num2+num3;

    printf("A soma dos 3 numeros inteiros e: %d", soma);

    return 0;
}
