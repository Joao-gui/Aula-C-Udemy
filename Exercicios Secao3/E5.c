/**
 * @file E5.c
 * @author your name (you@domain.com)
 * @brief Leia um número real e imprima a quinta a quinta parte deste número.
 * @version 0.1
 * @date 2023-06-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, quintaParte;
    printf("Insira o valor do numero: ");
    scanf("%lf", &num);
    quintaParte=num*1/5;
    printf("A quinta parte do numero %.2lf, e %.2lf.", num, quintaParte);
    return 0;
}
