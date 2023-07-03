/**
 * @file E2.c
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
    int numero;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor positivo inteiro: ");
    scanf("%d%*c", &numero);
    if (numero >= 0)
    {
        numero=sqrt(numero);
        printf("%d.", numero);
    }
    else if (numero<0)
    {
        printf("Numero inválido.");
    }
    getchar();    
    return 0;
}
