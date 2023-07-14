/**
 * @file E28.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int numero1, numero2, numero3;
    float resultado, resultado2;
    char opcao; 
    printf("Escolha o tipo de media que deseja fazer: \n");
    printf("a - Geometrica\n");
    printf("b - Ponderada\n");
    printf("c - Harmonica\n");
    printf("d - Aritimetica\n");
    opcao = getchar();
    switch (opcao)
    {
    case 'a':
        printf("Media Geometrica\n");
        printf("Digite o primeiro valor: ");
        scanf("%d%*c", &numero1);
        printf("Digite o segundo valor: ");
        scanf("%d%*c", &numero2);
        printf("Digite o terceiro valor: ");
        scanf("%d%*c", &numero3);
        resultado = pow(numero1*numero2*numero3,1.0/3.0);
        printf("Resultado %.1f", resultado);
        break;

    case 'b':
        printf("Media Ponderada\n");
        printf("Digite o primeiro valor: ");
        scanf("%d%*c", &numero1);
        printf("Digite o segundo valor: ");
        scanf("%d%*c", &numero2);
        printf("Digite o terceiro valor: ");
        scanf("%d%*c", &numero3);
        resultado = (numero1+2*numero2+3*numero3)/6;
        printf("Resultado %.1f", resultado);
        break;

    case 'c':
        printf("Media Harmonica\n");
        printf("Digite o primeiro valor: ");
        scanf("%d%*c", &numero1);
        printf("Digite o segundo valor: ");
        scanf("%d%*c", &numero2);
        printf("Digite o terceiro valor: ");
        scanf("%d%*c", &numero3);
        resultado2 = (1/numero1)+(1/numero2)+(1/numero3);
        resultado = 1/resultado2;
        printf("Resultado %.1f", resultado);
        break;

    case 'd':
        printf("Media Aritimetica\n");
        printf("Digite o primeiro valor: ");
        scanf("%d%*c", &numero1);
        printf("Digite o segundo valor: ");
        scanf("%d%*c", &numero2);
        printf("Digite o terceiro valor: ");
        scanf("%d%*c", &numero3);
        resultado = (numero1+numero2+numero3)/3;
        printf("Resultado %.1f", resultado);
        break;
    default:
        printf("Opcao invalida.");
        break;
    }
    return 0;
}
