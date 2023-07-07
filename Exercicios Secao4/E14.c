/**
 * @file E14.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double notaLaboratorio, notaSemestras, notaExamefinal, media;

    printf("Digite o valor da nota de laboratorio: ");
    scanf("%lf%*c",&notaLaboratorio);
    printf("Digite o valor da nota da prova Semestral: ");
    scanf("%lf%*c", &notaSemestras);
    printf("Digite o valor da nota do exame final: ");
    scanf("%lf%*c", &notaExamefinal);
    media = (notaLaboratorio*2+notaSemestras*3+notaExamefinal*5)/10;
    if (media <= 2.9)
    {
        printf("Sua media foi %.1lf.\n", media);
        printf("Reprovado.");
    }
    else if (media >= 3.0 && media <= 4.9)
    {
        printf("Sua media foi %.1lf.\n", media);
        printf("Recuperacao.");
    }
    else if (media >= 5.0 && media <= 10)
    {
        printf("Sua media foi %.1lf.\n", media);
        printf("Aprovado.");
    }
    else
    {
        printf("Sua media foi %.1lf.\n", media);
        printf("Numero invalido.");
    }
    return 0;
}
