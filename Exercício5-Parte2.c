/*Faça um algoritmo que receba um inteiro positivo n e prove a igualdade abaixo:(lista 4, ex 5 parte 2)*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  double n;
  double sum = 0.0;
  double test;

  printf("Type a whole positive number.\n");
  scanf("%lf", &n);
  while (n <= 0) {
    printf("ERROR: Number is equal to 0 or negative.");
    scanf("%lf", &n);
  }

  for (int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }

  test = (n*(n + 1)*((2*n) + 1))/6.0;

  printf("%.2lf = %.2lf", sum, test);
  
  return 0;
}