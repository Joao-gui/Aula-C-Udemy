/**
 * @file E31.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorAntecessor, valorSucessor;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorA);
    valorAntecessor = valorA-1;
    valorSucessor = valorA+1;
    printf("O valor Antecessor de %d é %d e o Sucessor é %d.", valorA, valorAntecessor, valorSucessor);
    getch();
    return 0;
}
