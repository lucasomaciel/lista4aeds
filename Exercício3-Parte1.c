/*Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura PARA e um contador.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }

    return 0;
}