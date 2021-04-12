/*Faça um algoritmo para escrever a palavra PROGRAMACAO 5 vezes utilizando um a estrutura de repetição.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  for (int i = 1; i <= 5; i++) {
    printf("PROGRAMACAO\n");
  }

    return 0;
}