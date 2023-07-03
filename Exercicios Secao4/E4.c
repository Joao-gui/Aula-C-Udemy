/**
 * @file E4.c
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
    float numero, numeroRaiz, numeroQuadrado;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero: ");
    scanf("%f%*c", &numero);
    if (numero >= 0)
    {
        numeroQuadrado = pow(numero, 2);
        printf("O numero ao quadrado é %.2f.\n",numeroQuadrado);
        numeroRaiz = sqrt(numero);
        printf("A raiz quadrada do numero é %.2f.\n", numeroRaiz);
    }
    else
    {
        printf("O numero digitado é invalido.");
    }    
    getchar();
    return 0;
}
