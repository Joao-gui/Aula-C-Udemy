/**
 * @file E46.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <locale.h>

int revert(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

int main()
{
    int num, rev;
    printf("Numero a inverter:\n");
    scanf("%d",&num);
    rev = revert(num);
    printf("o numero invertido é: %d\n", rev);
    getchar();
    return 0;
}
