/**
 * @file E7.c
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
    int numeroA, numeroB, diferencaNumeros;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero inteiro: ");
    scanf("%d%*c", &numeroA);
    printf("Digite outro numero inteiro: ");
    scanf("%d%*c", &numeroB);
    if (numeroA > numeroB)
    {
        printf("%d\n", numeroA);
        diferencaNumeros = numeroA - numeroB;
        printf("A diferença entre eles é de %d.", diferencaNumeros);
    }
    else if (numeroB > numeroA)
    {
        printf("%d\n", numeroB);
        diferencaNumeros = numeroB - numeroA;
        printf("A diferença entre eles é de %d.", diferencaNumeros);
    }
    else if (numeroA == numeroB)
    {
        printf("Os dois numeros são iguais.");
    }
    return 0;
}
