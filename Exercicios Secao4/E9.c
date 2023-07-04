/**
 * @file E9.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    double salario, prestacaoEmprestimo;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do salario: ");
    scanf("%lf%*c", &salario);
    printf("Digite o valor da prestação: ");
    scanf("%lf%*c", &prestacaoEmprestimo);

    salario = salario*0.2;

    if (salario<prestacaoEmprestimo)
    {
        printf("Emprestimo não concedido.");
    }
    else if (salario>=prestacaoEmprestimo)
    {
        printf("Emprestimo concedido.");
    }
    return 0;
}
