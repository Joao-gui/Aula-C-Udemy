/**
 * @file E3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    float numero;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero: ");
    scanf("%f%*c", &numero);
    if (numero >= 0)
    {
        numero = sqrt(numero);
        printf("A raiz quadrada do numero é %.1f.\n", numero);
    }
    else if (numero < 0)
    {
        numero = pow(numero, 2);
        printf("O quadrodo do numero é %.2f.\n", numero);
    }
    getchar();    
    return 0;
}
