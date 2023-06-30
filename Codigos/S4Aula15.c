/**
 * @file S4Aula15.c
 * @author your name (you@domain.com)
 * @brief Se��o 4 aula 15, vari�veis is, else, else if
 * @version 0.1
 * @date 2023-06-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    int idade;

    setlocale(LC_ALL, "Portuguese");
    printf("Qual � a sua idade? ");
    scanf("%d%*c", &idade);

    if (idade < 18)
    {
        printf("Voc� � menor de idade.\n");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Voc� � adulto.\n");
    }
    else
    {
        printf("Voc� � idoso.\n");
    }
    printf("Sua idade � de %d", idade);
    getchar();    
    return 0;
}
