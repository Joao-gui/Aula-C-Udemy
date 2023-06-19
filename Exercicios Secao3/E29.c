/**
 * @file E29.c
 * @author your name (you@domain.com)
 * @brief Exercise 29 Section 3
 * @version 0.1
 * @date 2023-06-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h> // Habilita função getch()
#include <math.h>

int main()
{
    double nota1, nota2, nota3, nota4, mEdia;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite o valor da segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite o valor da terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite o valor da quarta nota: ");
    scanf("%lf", &nota4);
    mEdia=(nota1+nota2+nota3+nota4)/4;
    printf("A media aritimética das 4 notas é de %.2lf\n", mEdia);
    getch();
    return 0;
}
