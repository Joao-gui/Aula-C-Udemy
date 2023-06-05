/**
 * @file S3Aula9.c
 * @author João Guilherme (eng.joaopellacani@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
// Aula sobre variáveis
#include <stdio.h> //entrada e saída padrão, no computador a entrada é o teclado e na saída o monitor (Serial)

int main()
{
    // Declarando variáveis
    int idade;

    // Função para escrever algo na saída padrão (console)
    printf("Qual sua idade? ");

    // Receber dados
    scanf("%d", &idade);

    // Imprimir a variável digitada
    printf("A sua idade e %d", idade);

    return 0;
}
