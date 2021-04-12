/*Faça um algoritmo que calcule o seguinte somatório: (somatório na lista 4, ex 3 parte 2).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  double l = 14.0;
  double divisor = pow(l, 2.0);
  double dividend = 2.0;
  double answer = 1.0/225.0;

  for (int i = 0; i < 14; i++) {
    double divisor = pow(l, 2.0);
    answer += (dividend/divisor);
    dividend *= 2;
    l--;
  }

  printf("%lf", answer);

  return 0;
}