/**
 * @file E01.c
 * @author your name (you@domain.com)
 * @brief Faça um programa que leia um número inteiro e o imprima
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    // Declarando a variável
    int num;

    // Função para mostrar a mensagem ao usuário para digitar um numero inteiro
    printf("Insira um numero inteiro:");

    // Funsão para receber o numero inteiro do usuárop
    scanf("%d", &num);

    // Funão para imprimir no console o numeor digitaro
    printf("O numero atribuido é: %d", num);

    return 0;
}
