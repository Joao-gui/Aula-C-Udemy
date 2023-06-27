/**
 * @file E44.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float alturaDegrau, alturaTotal, quantidadeDegraus;

    printf("Digite a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Qualu a altura que deseja alcançar: ");
    scanf("%f", &alturaTotal);
    quantidadeDegraus = alturaTotal/alturaDegrau;
    printf("A quantidade de degraus para subir é de %.0f.", quantidadeDegraus);
    getch();
    return 0;
}
