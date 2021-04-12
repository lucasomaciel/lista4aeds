/* Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  for (int i = 0; i <= 10; i++) {
    int mult;
    mult = i*8;
    printf("%d x 8 = %d\n", i, mult);
  }

    return 0;
}