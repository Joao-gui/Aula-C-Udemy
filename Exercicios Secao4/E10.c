/**
 * @file E10.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main()
{
    float peso, altura;
    int sexo;

    setlocale(LC_ALL, "Portuguese");
    printf("Selecione seu sexo.\n");
    printf("1-Masculino\n");
    printf("2-Feminino\n");
    scanf("%d", &sexo);
    printf("Digite sua altura: ");
    scanf("%f%*c", &altura);
    if (sexo == 1)
    {
        peso = (72.7*altura)-58;
    }
    else if (sexo == 2)
    {
        peso = (62.1*altura)-44.7;
    }
    printf("Seu peso idael é %.1f.", peso);    
    return 0;
}
