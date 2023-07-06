/**
 * @file E11.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-06
 * 
 * @copyright Copyright (c) 2023
 * Arquivo: SomaDigitos.c
 * ------------------
 * Este programa resolve o seguinte problema:
 * dado um inteiro positivo N, calcula a soma de seus digitos.
 * Ex: se N=14806 então a soma desejada é 6+0+8+4+1 = 19.
 *
 * O programa "descasca" N, retirando o dígito mais 
 * à direita e depois atualiza N (esta é a forma mais fácil de obter os dígitos). 
 */

#include <stdio.h>

int main()
{
  int N, /* inteiro positivo dado (a ser lido) */ 
      soma, /* soma dos dígitos de N */
      digito; /* para armazenar cada digito de N */
       
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  printf("\n Numero dado = %d", N);

  soma = 0; /* Inicializacao da soma */
 
  while (N > 0){
    digito =  N % 10; /* o digito mais à direita de N é obtido */
    soma = soma + digito;
    N = N / 10;  /* N passa a ser o N anterior sem o dígito mais à direita */
  }
  
  printf("\n Soma dos digitos do numero dado = %d\n", soma);
  return 0;
}