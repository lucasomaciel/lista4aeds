/*Faça um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100 utilizando um a estrutura de repetição.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n = 100;

  for (int i = 0; i < 10; i++) {
    n++;
    printf("%d\n", n);
  }

    return 0;
}