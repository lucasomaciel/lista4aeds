/*Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma repetição.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;

  printf("Type an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++) {
    printf("%d\n", n);
  }

    return 0;
}