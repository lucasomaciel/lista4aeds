/*Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura FAÇA/ENQUANTO e um contador.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int i = 1;

  do {
    printf("%d\n", i);
    i++;
  } while (i <= 10);

    return 0;
}