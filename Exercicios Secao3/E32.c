/**
 * @file E32.c
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

int main()
{
    int valorA,valorSucessor,valorAntecessor,valorSoma;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorA);
    valorSucessor=(valorA*3)+1;
    valorAntecessor=(valorA*2)-1;
    valorSoma=valorSucessor+valorAntecessor;
    printf("O valor da soma do sucessor de seu triplo com o antecessor de seu dobro é %d.", valorSoma);
    return 0;
}
