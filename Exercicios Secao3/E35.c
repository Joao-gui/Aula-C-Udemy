/**
 * @file E35.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main()
{
    float catetoA, catetoB, hiPotenusa;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor dos catetos do triângulo retângulo.\n");
    printf("Cateto A: ");
    scanf("%f", &catetoA);
    printf("Cateto B: ");
    scanf("%f", &catetoB);
    hiPotenusa=sqrt(pow(catetoA,2)+pow(catetoB,2));
    printf("Valor da hipotenusa é de %.1f", hiPotenusa);
    getch();
    return 0;
}
