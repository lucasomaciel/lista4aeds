/*Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir a palavra PROGRAMACAO N vezes.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;

  printf("Type how many times do you want to print PROGRAMACAO: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("PROGRAMACAO\n");
  }

    return 0;
}