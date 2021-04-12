/*Faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n = 1;

  for (int i = 0; i < 9; i++) {
    if (n % 2 != 0) {
      printf("%d\n", n);
    }
    n++;
  }

    return 0;
}