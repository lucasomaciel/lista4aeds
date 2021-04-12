/*Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura ENQUANTO e um
contador.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int i = 1;

  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }

    return 0;
}