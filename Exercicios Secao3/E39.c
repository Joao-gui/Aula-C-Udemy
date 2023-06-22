/**
 * @file E39.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    float valorPremio, primeiroPremio, segundoPremio, terceiroPremio;

    valorPremio = 780000;
    printf("Premio total: R$%.2f\n", valorPremio);
    primeiroPremio = valorPremio*0.46;
    segundoPremio = valorPremio*0.32;
    terceiroPremio = valorPremio-primeiroPremio-segundoPremio;
    printf("Valor do primero colcoado: R$%.2f\n",primeiroPremio);
    printf("Valor do segundo colocado: R$%.2f\n",segundoPremio);
    printf("Valor do terceiro colocado: R$%.2f",terceiroPremio);
    getch();
    return 0;
}
