/*Faça um algoritmo que calcule e escreva a soma dos 20 primeiros números da série: (série na lista 4, ex 4 parte 2)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  double answer = 100.0;
  double dividend = 99.0;
  double divisor = 1.0;

  for (int i = 0; i < 19; i++) {
    answer += (dividend/divisor);
    dividend--;
    divisor *= (divisor + 1);
  }

  printf("%lf", answer);

  return 0;
}