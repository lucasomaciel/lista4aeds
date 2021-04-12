/*Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir os N
primeiros números inteiros.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;

  printf("Type a positive number: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("The program only allow positive numbers.");
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
  }

    return 0;
}